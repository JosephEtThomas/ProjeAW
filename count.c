#include <stdio.h>
/* Compte les chiffres */
int main()
{
	char c;
	int i, ndigit[10];
	for ( i=0; i<10; ndigit[i++]=0 )
		;
	while ( (c=getchar()) != EOF )
		if ( c>='0' && c<='9' )
			++ndigit[c-'0'];
	for (i=0; i<10; ++i)
		printf("%i est apparu %i fois.\n", i, ndigit[i]);
	return 0;
}