#pragma once


#ifdef PG_PLATFORM_WINDOWS
	#ifdef PG_BUILD_DLL
		#define PGATE_API __declspec(dllexport)
	#else 
		#define PGATE_API __declspec(dllimport)
	#endif
#else
	#error Pgate only support Windows!
#endif 