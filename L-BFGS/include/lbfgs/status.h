// status.h
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

#ifndef _LBFGS_STATUS_H_
#define _LBFGS_STATUS_H_

#include "base.h"

LBFGS_EXTERN_C_BEGIN


enum lbfgs_status
{
    // L-BFGS reaches convergence.
    LBFGS_STATUS_SUCCESS = 0,

    // L-BFGS doesn't reach convergence.
    LBFGS_STATUS_FAILURE = -1000,
    LBFGS_STATUS_INVALID_VALUE = -1001,
    LBFGS_STATUS_INVALID_FUNCTION = -1002,
    LBFGS_STATUS_OUT_OF_MEMORY = -1003,

    // Line-Search
    LBFGS_STATUS_LINE_SEARCH_FAILURE = -2000,
    LBFGS_STATUS_LINE_SEARCH_INVALID_PARAMETER = -2001,
};
typedef enum lbfgs_status lbfgs_status;


LBFGS_EXTERN_C_END

#endif /* _LBFGS_STATUS_H_ */

