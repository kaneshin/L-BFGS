// lbfgs_parameter.c
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

#include "include/lbfgs/lbfgs_parameter.h"

#include <stdlib.h>

lbfgs_parameter *lbfgs_parameter_create()
{
    lbfgs_parameter *param = (lbfgs_parameter *)malloc(sizeof(lbfgs_parameter));
    param->line_search_parameter = line_search_parameter_create();
    return param;
}

void lbfgs_parameter_destroy(lbfgs_parameter *param)
{
    if (param != NULL)
    {
        line_search_parameter_destroy(param->line_search_parameter);
        free(param);
        param = NULL;
    }
}

