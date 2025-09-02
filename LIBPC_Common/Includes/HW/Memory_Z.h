#pragma once

#ifndef _MEMORY_Z_H_
#define _MEMORY_Z_H_

#include <cstdlib>

#define Alloc_Z( i_size )                       malloc( i_size )
#define Free_Z( i_ptr )                         free( i_ptr )

#endif // _MEMORY_Z_H_
