/*
 * Compile date and time.
 */

#if (defined(CMAKECONFIG))
#include "config.h"
const char *comprevision = SRB2_COMP_REVISION;

#elif (defined(COMPVERSION))
#include "comptime.h"
#else
const char *comprevision = "illegal";
#endif

const char *compdate = __DATE__;
const char *comptime = __TIME__;
