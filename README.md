# LiquidFunWrapper
Android wrapper of the LiquidFun physical engine.

All the features of Liquidfun have not been wrapped at the moment, but you can already create basice Bodies and use the particle system.

## How to use this library
In order to use this library in your project, you have to copy the _jniLibs_ folder (that can be found in app/src/main) in <yourapp>/src/main folder.

Ensure that your project has _jcenter_ in the repositories list:
```allprojects {
     repositories {
         google()
         jcenter()
     }
 }
 ```

Then, add the following dependency in your application module _build.gradle_ file:

`compile 'ch.shibastudio:liquidwrapper:1.1'`


Finally, the *Activity* using this library must load the library by adding this line in the _onCreate_ method:

`System.loadLibrary("liquidwrapper");`

