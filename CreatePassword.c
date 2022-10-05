#include <stdlib.h>
#include <stdint.h>
#include <time.h>

void CreateClearPass ( char* password, uint8_t pass_len )
{
	uint8_t i = 0;
	uint8_t pivot;

	srand ( ( unsigned int )time ( NULL ) );

	while ( i < pass_len )
	{
		pivot = rand () % 100;

		if ( pivot < 30 )
		{
			*password = '0' + rand () % ( ( '9' - '0' ) + 1 );
		}
		else if ( pivot < 75 )
		{
			*password = 'a' + rand () % ( ( 'z' - 'a' ) + 1 );
		}
		else if ( pivot < 100 )
		{
			*password = 'A' + rand () % ( ( 'Z' - 'A' ) + 1 );
		}

		password ++;
		i ++;
	}

	*password = '\0';

	return;
}