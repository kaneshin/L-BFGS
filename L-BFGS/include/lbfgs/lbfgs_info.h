// lbfgs_info.h
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

#ifndef _LBFGS_LBFGS_INFO_H_
#define _LBFGS_LBFGS_INFO_H_

#include "base.h"

LBFGS_EXTERN_C_BEGIN


struct lbfgs_info
{
    void (*print)(uint64_t iter, lbfgs_dim n, lbfgs_float *x, lbfgs_float *f, lbfgs_parameter *param);
};
typedef struct lbfgs_info lbfgs_info;


LBFGS_EXTERN_C_END

#endif /* _LBFGS_LBFGS_INFO_H_ */

