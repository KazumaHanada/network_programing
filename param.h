#include <netinet/ip.h>
#include <net/ethernet.h>


#define DEFAULT_MTU       (ETHERMTU) //ETHRMTUは net/ethernet.hに定義
#define DEFAULT_IP_TTL    (64)
#define DEFAULT_PING_SIZE (64)


typedef struct	{
	char	*device;
	u_int8_t	mymac[6];     //u_int8_tは netinet/ip.hに定義
	struct in_addr	myip;
	u_int8_t	vmac[6];
	struct in_addr	vip;
	struct in_addr	vmask;
	int	IpTTL;
	int	MTU;
	struct in_addr	gateway;
}PARAM;


int SetDefaultParam();
