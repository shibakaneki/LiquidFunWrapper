# LiquidFunWrapper
Android wrapper of the [LiquidFun](http://google.github.io/liquidfun/) physical engine.

All the features of Liquidfun have not been wrapped at the moment, but you can already create basice Bodies and use the particle system.

## How to use this library
In order to use this library in your project, you have to copy the _jniLibs_ folder (that can be found in app/src/main) in <yourapp>/src/main folder.

Ensure that your project has _jcenter_ in the repositories list:
```
allprojects {
     repositories {
         google()
         jcenter()
     }
 }
```

Then, add the following dependency in your application module _build.gradle_ file:

```
compile 'ch.shibastudio:liquidwrapper:1.3'
```


Finally, the *Activity* using this library must load the library by adding this line in the _onCreate_ method:

```
System.loadLibrary("liquidfun");
System.loadLibrary("liquidwrapper");
```

## License

Copyright 2018 Clerc Didier

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.