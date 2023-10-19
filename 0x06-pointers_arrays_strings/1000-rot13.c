#include <stdio.h>
#include <string.h>

char *rot13(char *str)
{
	char rotMap[256];
	int i = 0, len;

	len = strlen(str);

/**	rotMap['A'] = 'N';
	rotMap['a'] = 'n';
	rotMap['B'] = 'O';
	rotMap['b'] = 'o';
	rotMap['C'] = 'P';
	rotMap['c'] = 'p';
	rotMap['D'] = 'Q';
	rotMap['d'] = 'q';
	rotMap['E'] = 'R';
	rotMap['e'] = 'r';
	rotMap['F'] = 'S';
	rotMap['f'] = 's';
	rotMap['G'] = 'T';
	rotMap['g'] = 't';
	rotMap['H'] = 'U';
	rotMap['h'] = 'u';
	rotMap['I'] = 'V';
	rotMap['i'] = 'v';
	rotMap['J'] = 'W';
	rotMap['j'] = 'w';
	rotMap['K'] = 'X';
	rotMap['k'] = 'x';
	rotMap['L'] = 'Y';
	rotMap['l'] = 'y';
	rotMap['M'] = 'Z';
	rotMap['m'] = 'z';
	rotMap['N'] = 'A';
	rotMap['n'] = 'a';
	rotMap['O'] = 'B';
	rotMap['o'] = 'b';
	rotMap['P'] = 'C';
	rotMap['p'] = 'c';
	rotMap['Q'] = 'D';
	rotMap['q'] = 'd';
	rotMap['R'] = 'E';
	rotMap['r'] = 'e';
	rotMap['S'] = 'F';
	rotMap['s'] = 'f';
	rotMap['T'] = 'G';
	rotMap['t'] = 'g';
	rotMap['U'] = 'H';
	rotMap['u'] = 'h';
	rotMap['V'] = 'I';
	rotMap['v'] = 'i';
	rotMap['W'] = 'J';
	rotMap['w'] = 'j';
	rotMap['X'] = 'K';
	rotMap['x'] = 'k';
	rotMap['Y'] = 'L';
	rotMap['y'] = 'l';
	rotMap['Z'] = 'M';
	rotMap['z'] = 'm';
*/
	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i]
			<= 'm'))
			str[i] = str[i] + 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' &&
				str[i] <= 'z'))
			str[i] = str[i] - 13;
	}
	return (str);
}
