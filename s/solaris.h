#include "sysv.h"

/* use /proc to obtain process information */
#define _SLASH_PROC_METHOD_

#undef bsdlike
#undef IP_FORWARDING_SYMBOL
#undef ARPTAB_SYMBOL
#define ARPTAB_SYMBOL "arptab_nb"
#undef ARPTAB_SIZE_SYMBOL
#define ARPTAB_SIZE_SYMBOL "arphd"
#undef ICMPSTAT_SYMBOL
#undef TCPSTAT_SYMBOL
#undef TCP_SYMBOL
#undef UDPSTAT_SYMBOL
#undef UDB_SYMBOL
#undef RTTABLES_SYMBOL
#undef RTHASHSIZE_SYMBOL
#undef RTHOST_SYMBOL
#undef RTNET_SYMBOL
#undef IPSTAT_SYMBOL
#undef TCP_TTL_SYMBOL
#undef PROC_SYMBOL
