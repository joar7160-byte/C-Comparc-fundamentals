#include <stdio.h>
#include <stdbool.h>

int getmax(int x, int y){
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
}

bool agecheck(int age){
    if (age >= 18){
        return true;
    }
    else{
        return false;
   }
}

double cube(double num){
    return num * num * num;
}

int square1(double num){
    return num * num;
}

double square(double num){
    return num * num;
}

int main() {
    
    
    int x = 4 * 4;
    int y = 5 * 5;
    int z = 6 * 6;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    printf("-----------------\n");

    int q = square1(4);
    int w = square1(5);
    int e = square1(6);

    printf("%d\n", q);
    printf("%d\n", w);
    printf("%d\n", e);


    printf("-----------------\n");


    double u = square(4.2);
    double i = square(5.1);
    double o = square(6.3);

    printf("%lf\n", u);
    printf("%lf\n", i);
    printf("%lf\n", o);

    printf("-----------------\n");

    double num1 = cube(1);
    double num2 = cube(2);
    double num3 = cube(3);
    
    
    printf("%lf\n", num1);
    printf("%lf\n", num2);
    printf("%lf\n", num3);

    printf("-----------------\n");

    if(agecheck(18)){
        printf("You are allowed to join this club!\n");
    }
    else{
        printf("You are not old enough to join this club!\n");
    }

    printf("-----------------\n");

    int max = getmax(7,5);
    printf("%d", max);


    return 0;   //returning 0 because it serves as a exit code

}