package extension.devicelang;

#if flash
import flash.system.Capabilities;
#end

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end

#if (android && openfl)
import openfl.utils.JNI;
#end


class DeviceLanguage {
	
	
	public static function getLang ():String {
		
		#if (android && openfl)
				
		return DeviceLanguage_android_getLang();
		
		#elseif ios
		
		return DeviceLanguage_ios_getLang();
		
		#elseif js
		
		return untyped __js__("navigator.language || navigator.userLanguage");
		
		#elseif flash
		
		return Capabilities.language;
		
		#elseif (windows || linux)
		
		return DeviceLanguage_cpp_getLang();
		
		#else
		
		return "null";
		
		#end
		
	}
	
	#if ios
	private static var DeviceLanguage_ios_getLang = Lib.load ("devicelanguage", "devicelanguage_get_lang", 0);
	#end
	
	#if (android && openfl)
	private static var DeviceLanguage_android_getLang = JNI.createStaticMethod ("com.devicelanguage.DeviceLanguage", "getLang", "()Ljava/lang/String;",true);
	#end
	
	#if (windows || linux)
	private static var DeviceLanguage_cpp_getLang:Void->String = Lib.load("devicelanguage","getLang",0);
	#end
	
	
}
