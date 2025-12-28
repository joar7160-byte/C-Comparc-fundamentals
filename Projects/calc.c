#include <stdio.h>
#include <math.h>

int main(){
    char Math_Operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("First number: ");
    scanf("%lf", &num1);

    printf("Math Operator (+, -, *, /): ");
    scanf(" %c", &Math_Operator);  //clear new line input buffer 

    printf("Second number: ");
    scanf("%lf", &num2);

    switch (Math_Operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("ERROR\n"); //can't divide by 0
        }
        else{
            result = num1 / num2;
        }
        break;

    default:
        printf("Invalid operator!3 \n");
        break;
    }
    printf("Result: %.4lf", result);
    
    return 0;

}