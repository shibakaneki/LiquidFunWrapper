# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_library( # Sets the name of the library.
             liquidwrapper

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp
             src/main/cpp/worldwrapper.cpp
             src/main/cpp/polygonshapewrapper.cpp
             src/main/cpp/circleshapewrapper.cpp
             src/main/cpp/chainshapewrapper.cpp
             src/main/cpp/edgeshapewrapper.cpp
             src/main/cpp/shapewrapper.cpp
             src/main/cpp/fixturewrapper.cpp
             src/main/cpp/fixturedefwrapper.cpp
             src/main/cpp/bodywrapper.cpp
             src/main/cpp/bodydefwrapper.cpp
             src/main/cpp/vec2wrapper.cpp
             src/main/cpp/colorwrapper.cpp
             src/main/cpp/particlesystemdefwrapper.cpp
             src/main/cpp/particledefwrapper.cpp
             src/main/cpp/particlesystemwrapper.cpp
             src/main/cpp/particlegroupwrapper.cpp
             src/main/cpp/particlegroupdefwrapper.cpp
             src/main/cpp/particlecolorwrapper.cpp
             src/main/cpp/transformwrapper.cpp
             src/main/cpp/liquidwrapper.cpp)

add_library( liquidfun
             SHARED
             IMPORTED)

set_target_properties(liquidfun
                      PROPERTIES IMPORTED_LOCATION
                      ${PROJECT_SOURCE_DIR}/libs/liquidfun/src/${ANDROID_ABI}/libliquidfun.so )

include_directories( libs/liquidfun/include/ )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( liquidwrapper
                       liquidfun

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )