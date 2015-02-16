#include <hx/CFFI.h>
#import "../include/Utils.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

namespace devicelanguage {
	
	
	const char* GetLang() {
		NSString * language = [[[NSLocale preferredLanguages] objectAtIndex:0]substringToIndex:2];
		return [language UTF8String];
		
	}
	
	
}
