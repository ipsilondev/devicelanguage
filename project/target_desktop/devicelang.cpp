#define IMPLEMENT_API
#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
    #define NEKO_COMPATIBLE
#endif

#include <hx/CFFI.h>
#if defined(HX_WINDOWS)		
	#include <windows.h>
#endif
#include <iostream>
#include <locale>


extern "C" {
	value getLang() {
#if defined(HX_WINDOWS)		
		LANGID langID = GetUserDefaultUILanguage();
		int langSize = GetLocaleInfo(langID, LOCALE_SISO639LANGNAME, NULL, 0);
		char *lang = new char[langSize];
		GetLocaleInfo(langID, LOCALE_SISO639LANGNAME, lang, langSize);
		return alloc_string(lang);
#else 
		return alloc_string(((std::string) std::locale("").name()).substr(0, 2).c_str());
#endif
	}
}
DEFINE_PRIM(getLang, 0);