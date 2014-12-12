#include "BufferGL.h"

#include "custom_assert.h"
#include <string>

void BufferGL::destroy()
{
	glDeleteBuffers(1, &id);
	id = 0;
}

void BufferGL::update(void* data, u32 size, u32 offset)
{
	//TODO
	/*ASSERT( data )
	{
		void* ptr = glMapBufferRange( id, offset, size, GL_MAP_WRITE_BIT );
		memcpy( ptr, data, size );
		glUnmapNamedBuffer( id );
	}*/
}

void BufferGL::getSubData(void* data, u32 size, u32 offset)
{
	//TODO
	/*ASSERT( data )
	{
		glGetNamedBufferSubData( id, offset, size, data );
	}*/
}

auto BufferGL::getDesc() -> rBuffer
{
	return adata;
}