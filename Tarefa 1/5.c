#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int e_prefixo (char s1[], char s2[])   //verifica se um string é prefixo de outra
{
	int i, a;
	for (i=0, a=1; i<strlen(s1); i++)
	{
		a=a && (s1[i]==s2[i]);
	}
	return a;
}

int contem (char s1[], char s2[])    //verifica se um string esta contida noutra
{
	int k;
	for (k=0; k<strlen(s2); k++)
	{
		if (e_prefixo (s1, s2+k))
			return k+1;
	}
	return 0;
}

