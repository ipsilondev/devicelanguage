Device Language
==========

Simple extension for OpenFL that returns the language of the device where the app is running. Supporting currently HTML5, Flash, Windows, Linux, iOS and Android targets (contribution for missing targets is welcome)

### With love from:

**[Ipsilon Developments Inc.](http://www.ipsilondev.com)** released under **MIT license**

Like our **[Facebook](http://www.facebook.com/ipsilondev)** page to get news about our releases

Or Follow us on **[Twitter](https://twitter.com/ipsilondev)**

You can also contact us at **info [AT] ipsilondev.com**

How to use
==========

First of all, install the lib:

```bash
haxelib install devicelanguage
```

Once this is done, you just need to add this to your project.xml
```xml
<haxelib name="devicelanguage" />
```
then from haxe, just do:

```haxe
// This example show a simple use case.

import extension.devicelang.DeviceLanguage;

var lang:String = DeviceLanguage.getLang();

```

returns a string representing the language in [ISO-639-1 format](http://en.wikipedia.org/wiki/List_of_ISO_639-1_codes) for Flash, Windows, Linux, Android and iOS target and in similar way, for html5 target, just that also includes the country (for example, Android would return "en" for english, and in html5 could return "en-US")
