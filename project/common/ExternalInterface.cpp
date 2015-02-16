#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "Utils.h"


using namespace devicelanguage;



static value devicelanguage_get_lang () {
	
	return alloc_string(GetLang());
	
}
DEFINE_PRIM (devicelanguage_get_lang, 0);



extern "C" void devicelanguage_main () {
	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (devicelanguage_main);



extern "C" int devicelanguage_register_prims () { return 0; }
