// main.c

#include <stdio.h>
#include <stdlib.h>

#include "lbfgs.h"

#define N 100

static lbfgs_float value(lbfgs_dim n, const lbfgs_float *x)
{
    return (x[0] - x[1] * x[1]) * (x[0] - x[1] * x[1]) + (x[1] - 2.) * (x[1] - 2.) / 2.;
}

static void gradient(lbfgs_dim n, lbfgs_float *g, const lbfgs_float *x)
{
    g[0] = x[0] - x[1] * x[1];
    g[1] = -2. * x[1] * (x[0] - x[1] * x[1]) + x[1] - 2.;
}

static void print(uint64_t iter, lbfgs_dim n, lbfgs_float *x, lbfgs_float *f, lbfgs_parameter *param)
{
    printf("iter = %lld, %lld: fval = %f\n", iter, n, *f);
}

int main(int argc, const char * argv[])
{
    uint64_t i;
    lbfgs_float f;
    lbfgs_float *x;
    lbfgs_function *func;
    lbfgs_parameter *param;
    lbfgs_info info;

    f = 0;

    x = calloc(N, sizeof(lbfgs_float));
    for (i = 0; i < N; ++i)
        x[i] = 0.;

    func = lbfgs_function_create();
    func->value = value;
    func->gradient = gradient;

    param = lbfgs_parameter_create();
    param->tolerance = 1;
    param->upper_iter = 100UL;

    info.print = print;

    if (lbfgs(N, x, &f, func, param, &info) == LBFGS_STATUS_SUCCESS)
    {

    }
    else
    {
        // Error
    }

    lbfgs_parameter_destroy(param);
    if (x != NULL)
    {
        free(x);
        x = NULL;
    }
    lbfgs_function_destroy(func);
    
    return 0;
}
