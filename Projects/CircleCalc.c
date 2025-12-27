#include <stdio.h>
#include <math.h>

int main(){
    double radius = 0.0;
    const double PI = 3.14159;  //const makes sure we can't accidentally value 
    double surfaceArea = 0.0;
    double area = 0.0;
    double Volume = 0.0;

    printf("Enter Radius: ");
    scanf("%lf", &radius);
    
    
    area = PI * pow(radius,2);
    surfaceArea = 4 * PI  * pow(radius,2);
    Volume = (4.0/3.0) * PI * pow(radius,3);  //  4.0/3.0  to avoid int division 


    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
     printf("Volume: %.2lf\n", Volume);

    return 0;
}