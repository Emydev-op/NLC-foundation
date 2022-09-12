#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    printf("%c\n", CHAR_MAX);
    printf("%c\n",CHAR_MIN);
    printf("%f\n", FLT_MAX);
    printf("%f\n", FLT_MIN);
    printf("%ld\n", LONG_MAX);
    printf("%ld\n", LONG_MIN);
    printf("%hu\n", SHRT_MAX);
    printf("%hu\n", SHRT_MIN);
    printf("%lf\n", DBL_MAX);
    printf("%lf\n", DBL_MIN);
    return 0;
}
