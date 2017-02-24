#ifndef ARRAY_H
#define ARRAY_H

#ifdef ARRAY_IMPLEMENTATION
#undef ARRAY_IMPLEMENTATION
#endif
#ifdef ARRAY_TYPE
#undef ARRAY_TYPE
#endif

#include "generic_array.h"
#include "generic_macros.h"

#define ARRAY_IMPLEMENTATION

#define ARRAY_TYPE int
#include "generic_array.h"
#undef ARRAY_TYPE

#define ARRAY_TYPE char
#include "generic_array.h"
#undef ARRAY_TYPE

#define ARRAY_TYPE short
#include "generic_array.h"
#undef ARRAY_TYPE

#undef ARRAY_IMPLEMENTATION

#endif
