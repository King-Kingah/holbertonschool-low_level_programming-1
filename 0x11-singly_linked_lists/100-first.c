#include <stdio.h>
/**
* Apply the constructor attribute to myStartupFun() so that it
* is executed before main()
*/
void myConstructor( void ) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!");
}
