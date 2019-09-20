#include <stdio.h>

void internal_function_is_not_visible()
{
   printf( "can't call me.\n" );
}

void foo( int x )
{
   printf( "foo@@V1: %d\n", x );
}
