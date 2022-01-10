cmake_minimum_required(VERSION 3.0.0)
project(Codeforces VERSION 0.1.0)

if(NOT MSVC) # Why was this here? I exempted the wierd linker flags
    set( CMAKE_CXX_FLAGS "-O2 -Wall -Wpedantic")
endif()

set(CMAKE_SUPPRESS_REGENERATION true)

file(GLOB SOURCE_FILES */*.cpp)
foreach( sourcefile ${SOURCE_FILES} )
    get_filename_component( filename ${sourcefile} NAME_WE )
    add_executable( ${filename} ${sourcefile} )
endforeach( sourcefile ${SOURCE_FILES} )
