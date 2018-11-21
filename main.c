#include <stdio.h>
#include "param.h"


PARAM Param;


int main(int argc, char *argv[])
{
	printf("call main\n");
	SetDefaultParam();
	return(0);
}
