#include <stdio.h>
#include <math.h>

int main(){
    // x = sqrt(x);
    // x = pow(x, 4);
    // x = round(3.14);
    // x = ceil(x);  rounds up
    // x = floor(x);  rounds down
    // x = abs(x);
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    // x = tan(x);


    int x = 9;
    x = sqrt(x);
    printf("x value is %d:\n", x);

    int y = 4;
    y = pow(y, 3);
    printf("y value is %d:\n", y);

    float z = 3.14;
    z = round(z);
    printf("z value is %f\n", z);

    float celling = 3.4;
    celling = ceil(celling);
    printf("celling value is %f\n", celling);

    float flooring  = 3.99;
    flooring = floor(flooring);
    printf("Flooring value is %f\n", flooring);

    int q = -3;
    q = abs(q);
    printf("q value is %d\n", q);

    float e = 3;
    e = log(e);
    printf("e value is %f\n", e);

    float p = 90;
    p = sin(90);
    printf("p value is %f\n", p);

    float o = 90;
    o = cos(90);
    printf("o value is %f\n", o);

    float j = 90;
    j = tan(90);
    printf("j value is %f\n", j);


    return 0;

}