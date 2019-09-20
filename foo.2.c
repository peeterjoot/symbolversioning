#include <stdio.h>

void internal_function_is_not_visible()
{
   printf( "can't call me.\n" );
}

void foo2( int x, int y )
{
   printf( "foo@@V2: %d %d\n", x, y );
}

void foo1( int x )
{
   printf( "foo@@V1: %d\n", x );
}

#define V_1_2 "MYSTUFF_1.2"
#define V_1_1 "MYSTUFF_1.1"

#define SYMVER( s ) \
    __asm__(".symver " s )

SYMVER( "foo1,foo@" V_1_1 );
SYMVER( "foo2,foo@@" V_1_2 );
