message( "-Excessive-Engine" )

add_subdirectory( Common )

if(WIN32)
	add_subdirectory( CommonWin )
elseif(UNIX)
	add_subdirectory( CommonLin )
elseif(APPLE)
	add_subdirectory( CommonMac )
endif()

add_subdirectory( PIL )
add_subdirectory( Core )
add_subdirectory( GraphicsApi )
add_subdirectory( GraphicsEngine )
add_subdirectory( PhysicsEngine )
add_subdirectory( SoundEngine )
add_subdirectory( NetworkEngine )
add_subdirectory( Deployment )

add_subdirectory( Test )
