// base.h
//
// Copyright (c) 2014 Shintaro Kaneko
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef _LBFGS_BASE_H_
#define _LBFGS_BASE_H_

#include "defines.h"


#if !defined(LBFGS_EXTERN_C_BEGIN)
# if defined(__cplusplus)
#  define LBFGS_EXTERN_C_BEGIN extern "C" {
#  define LBFGS_EXTERN_C_END   }
# else
#  define LBFGS_EXTERN_C_BEGIN
#  define LBFGS_EXTERN_C_END
# endif
#endif


#if !defined(LBFGS_EXTERN)
#define LBFGS_EXTERN extern
#endif


// Float Type
#if defined(LBFGS_FLOAT_TYPE)
# undef LBFGS_FLOAT_TYPE
# undef LBFGS_FLOAT_IS_DOUBLE
#endif
#if defined(LBFGS_FLOAT_USING_SINGLE_PRECISION) && LBFGS_FLOAT_USING_SINGLE_PRECISION == 1
# define LBFGS_FLOAT_TYPE float
# define LBFGS_FLOAT_IS_DOUBLE 0
#else
# define LBFGS_FLOAT_TYPE double
# define LBFGS_FLOAT_IS_DOUBLE 1
#endif
typedef LBFGS_FLOAT_TYPE lbfgs_float;


// Dimension Integer Type
#if !defined(LBFGS_DIMENSION_INT_TYPE)
# define LBFGS_DIMENSION_INT_TYPE long long int
#endif
typedef LBFGS_DIMENSION_INT_TYPE lbfgs_dim;



#endif /* _LBFGS_BASE_H_ */
