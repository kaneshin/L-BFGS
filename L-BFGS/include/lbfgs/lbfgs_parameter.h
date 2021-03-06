// lbfgs_parameter.h
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

#ifndef _LBFGS_LBFGS_PARAMETER_H_
#define _LBFGS_LBFGS_PARAMETER_H_

#include "base.h"

#include "line_search_parameter.h"

LBFGS_EXTERN_C_BEGIN


struct lbfgs_parameter
{
    lbfgs_float tolerance;
    uint64_t upper_iter;
    line_search_parameter *line_search_parameter;
};
typedef struct lbfgs_parameter lbfgs_parameter;

lbfgs_parameter *lbfgs_parameter_create();
void lbfgs_parameter_destroy(lbfgs_parameter *);


LBFGS_EXTERN_C_END

#endif /* _LBFGS_LBFGS_PARAMETER_H_ */
