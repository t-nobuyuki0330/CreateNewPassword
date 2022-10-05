#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "CreatePassword.h"

int main ( void )
{
	uint8_t pass_len;
	char* input_pass_len;
	char* password;

	fprintf ( stderr, "please input password length : " );
	scanf ( "%d", &pass_len );

	password = ( char* )malloc ( pass_len + 1 );
	if ( password == NULL )
	{
		fprintf ( stderr, "[ FAIL ] memory lack.\n" );
	}

	CreateClearPass ( password, pass_len );

	fprintf ( stderr, "password : %s\n", password );

	free ( password );

	while ( 1 ) if ( kbhit() ) break;

	return 0;
}