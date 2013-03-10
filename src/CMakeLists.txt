# William Wu, 2013 March 05 

# paths to source files
include_directories (${CMAKEDEMO_SOURCE_DIR}/src) 
link_directories (${CMAKEDEMO_BINARY_DIR}/src)

# build custom libraries
set (LIBS lament pi) 
foreach (lib ${LIBS})
	add_library (${lib} ${lib}.cpp)
endforeach (lib)

# identify external libraries
set (EXTLIBS ${Boost_SYSTEM_LIBRARY} ${Boost_DATE_TIME_LIBRARY} ${Boost_THREAD_LIBRARY} m)
if(UNIX)
	LIST(APPEND EXTLIBS m)
endif(UNIX)

# build executable
add_executable (CMAKEDEMO cmakedemo.cpp)
target_link_libraries (CMAKEDEMO ${LIBS} ${EXTLIBS})  

# used for debugging --- print out all variable names:
# get_cmake_property(_variableNames VARIABLES)
# foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()