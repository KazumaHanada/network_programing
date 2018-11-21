#include <stdio.h>
#include "param.h"


extern PARAM Param; //main.cのparamにアクセス


int SetDefaultParam()
{
	Param.MTU=DEFAULT_MTU;
	Param.IpTTL=DEFAULT_IP_TTL;
	return(0);
}
