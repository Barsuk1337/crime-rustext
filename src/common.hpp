/*
	About: rustext common
	Author: ziggi
*/

#ifndef COMMON_H
#define COMMON_H

#include <sdk/plugin.h>

#define MAX_PLAYERS 100

typedef void (*logprintf_t)(const char* format, ...);
typedef int (AMX_NATIVE_CALL *amx_Function_t)(AMX *amx, cell *params);

#ifndef CHECK_PARAMS
	#define CHECK_PARAMS(m,n) \
		if (params[0] != (m * 4)) { \
			logprintf(" * " PLUGIN_NAME ": Incorrect parameter count for \"%s\", %d != %d\n", n, m, (static_cast<int>(params[0])) / 4); \
			return 0; \
		}
#endif

// rpc data
enum RPCEnumeration {
	RPC_DisplayGameText   = 73,
	RPC_InitMenu          = 76,
	RPC_TextDrawSetString = 105,
	RPC_ShowTextDraw      = 134,
};

#endif
