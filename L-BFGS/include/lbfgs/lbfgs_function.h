// lbfgs_function.h
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

#ifndef _LBFGS_LBFGS_FUNCTION_H_
#define _LBFGS_LBFGS_FUNCTION_H_

#include "base.h"

LBFGS_EXTERN_C_BEGIN


struct lbfgs_function
{
    lbfgs_float (*value)(lbfgs_dim, const lbfgs_float *);
    void (*gradient)(lbfgs_dim, lbfgs_float *, const lbfgs_float *);
};
typedef struct lbfgs_function lbfgs_function;

lbfgs_function *lbfgs_function_create();
void lbfgs_function_destroy(lbfgs_function *);


LBFGS_EXTERN_C_END

#endif /* _LBFGS_LBFGS_FUNCTION_H_ */


