#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <unistd.h>

/**
  * elf_check - Aux Function
  * Description: checks if the file is an elf file
  * @e_ident: A pointer to an array containing the ELF magic numbers
  */

void elf_check(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; ++i)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 69 &&
				e_ident[i] != 76 &&
				e_ident[i] != 70)
		{
			dprintf(STDERR_FILENO, "Not an ELF file\n");
			exit(98);
		}
	}
}

/**
  * handle_magic - Aux Function
  * Description: prints the magic numbers of the ELF header file separating
  * them with a space
  * @e_ident: A pointer to an array containing the ELF magic numbers
  */

void handle_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
  * handle_class - Aux Function
  * Description: prints the class of the ELF header file indicating whether its
  * ELF32 or ELF64 or none
  * @e_ident: A pointer to an array containing the ELF class
  */

void handle_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>", e_ident[EI_CLASS]);
			break;
	}
}


/**
  * handle_data - Aux Function
  * Description: prints the endiannes (data representation) of the ELF header
  * file indicating whether its in little-endian or big-endian
  * @e_ident: A pointer to an array containing the ELF class
  */

void handle_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's compliment, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's compliment, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>", e_ident[EI_DATA]);
			break;
	}
}

/**
  * handle_version - Aux Function
  * Description: prints the version of the ELF header file and if it is the
  * same as the current file
  * @e_ident: A pointer to an array containing the ELF version
  */

void handle_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (Current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */

void handle_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */

void handle_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void handle_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */

void handle_entryAddr(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @fd: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing elf file %d\n", fd);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	Elf64_Ehdr *elf_header;

	int fd1, fd2;

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Could not open %s\n", argv[1]);
		exit(98);
	}
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (elf_header == NULL)
	{
		close_fd(fd1);
		dprintf(STDERR_FILENO, "Could not malloc %s buffer\n", argv[1]);
		exit(98);
	}
	fd2 = read(fd1, elf_header, sizeof(Elf64_Ehdr));
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Could not read %s\n", argv[1]);
		exit(98);
	}

	elf_check(elf_header->e_ident);
	printf("Elf Header:\n");
	handle_magic(elf_header->e_ident);
	handle_class(elf_header->e_ident);
	handle_data(elf_header->e_ident);
	handle_version(elf_header->e_ident);
	handle_osabi(elf_header->e_ident);
	handle_abi(elf_header->e_ident);
	handle_type(elf_header->e_type, elf_header->e_ident);
	handle_entryAddr(elf_header->e_entry, elf_header->e_ident);
	free(elf_header);
	close_fd(fd1);
	return (0);
}
