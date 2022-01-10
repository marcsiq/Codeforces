cmake_minimum_required(VERSION 3.21.0)
project(Codeforces VERSION 0.1.0)

set(CMAKE_SUPPRESS_REGENERATION true)

file(GLOB SOURCE_FILES */*.cpp)
foreach( sourcefile ${SOURCE_FILES} )
    get_filename_component( filename ${sourcefile} NAME_WE )
    add_executable( ${filename} ${sourcefile} )
endforeach( sourcefile ${SOURCE_FILES} )