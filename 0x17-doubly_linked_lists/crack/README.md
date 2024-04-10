# SSH File Generator

## Overview
This simple script, `gen_ssh`, automates the process of generating SSH key pairs for a given email or credential and storing them in text files. It provides a convenient way to manage and organize SSH keys for secure connections.

## Usage
```bash
./gen_ssh [credential] [file_name] [/path/to/dir]
```

#### Example:
```bash
./gen_ssh example1@email.com foo bar
```

This command generates an SSH key pair for the email credential
`example1@email.com`, saves the `private` key in the text file `foo` and
the `public` key in `foo.pub`, both located in the `bar` directory.
Finally, it prints the content of `foo.pub` (the public key) to the screen.

If the destination directory already contains a file with the specified file
name, the script appends a numerical suffix to create a unique file name
(e.g.,`foo1`, `foo2`, ...)

#### Example:
```bash
./gen_ssh example2@email.com foo ~/.ssh
```

This command generates `private` and `public` keys - `foo` and `foo.pub` - and
stores them in the `~/.ssh` directory. 

#### Example:
```bash
./gen_ssh example3@email.com foo 
```

For this command, since the directory field is empty, the SSH key pair is
generated. The `private` key will be written into the file `foo`, while the
`public` key is written in `foo.pub` and both files are stored in the `~/.ssh` 
directory by default. 

#### Example:
```bash
./gen_ssh example4@email.com
```

Here, both the directory and file name fields are empty, hence, `~/.ssh` is
the default directory, while `id_rsa` and `id_rsa.pub` are the default file
names for the `private` and `public` keys respectively.

#### Error Handling:
* If the script is run without providing any parameters, it will display an error message:
```bash
Usage: ./gen_ssh [credential] [file_name] [/path/to/dir]
```

* If the script encounters any other errors, an appropriate error message is
displayed on the screen, the script exits and the error code causing the error is set.

To see the latest error code:
```bash
echo $?
```


## SSH Agent
The script sets up the SSH agent's environment variables to store the decrypted private key, ensuring persistent SSH connections. The private key is saved in the specified text file and must be kept private. Only the corresponding public key should be used for secure connections.

### Manual Export of `SSH_AUTH_SOCK`:
In situations where the script is run from within a subshell or a different
environment, the `SSH_AUTH_SOCK` variable should be exported manually to point to the correct agent socket:
```bash
export SSH_AUTH_SOCK=$(find /tmp/ssh-*/ ~/.ssh/* -type s -name agent.* 2>/dev/null | head -n 1)
```

This ensures that the SSH agent's environment variables are correctly set for
persistent connections when the script is run from within a subshell or a
different environment altogether.

## Note
* Always keep your private keys secure and never share them.
* Use the corresponding public key for authentication on platforms like GitHub.

Enjoy secure and convenient SSH key management with `gen_ssh`!
