message( "-GraphicsEngineRT" )

#########################################################################
# Files

FILE( GLOB_RECURSE sources src/*.c* )
FILE( GLOB_RECURSE headers src/*.h* )
FILE( GLOB_RECURSE interfaces ../Interfaces/*)

#########################################################################
# Filters

# Global filter
SOURCE_GROUP(\\ FILES $(sources) $(headers))

#interfaces
SOURCE_GROUP(Interfaces FILES ${interfaces})

# Main
SOURCE_GROUP(Main FILES src/GraphicsEngine.h src/GraphicsEngine.cpp)

#########################################################################
# Project

if(BUILD_EXCESSIVE_WITH_DLL)
	add_library( GraphicsEngineRT SHARED ${sources} ${headers} ${interfaces} )
	target_link_libraries( GraphicsEngineRT "-Wl,--whole-archive" Common  "-Wl,--no-whole-archive")
else()
	add_library( GraphicsEngineRT STATIC ${sources} ${headers} ${interfaces} )
endif()
