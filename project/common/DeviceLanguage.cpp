#include "Utils.h"


namespace devicelanguage {
	
	
	int GetLang() {
		
		return NSString * language = [[[NSLocale preferredLanguages] objectAtIndex:0]substringToIndex:2];
		
	}
	
	
}
