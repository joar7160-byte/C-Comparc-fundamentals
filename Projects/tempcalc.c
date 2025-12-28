#include <stdio.h>
#include <math.h>

//temp conservion 
int main (){
    char choice = '\0';
    float Fahrenheit = 0.0f;
    float Celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C'){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &Celsius);
        Fahrenheit = (Celsius * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", Celsius, Fahrenheit);
    } 
    else if (choice == 'F')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &Fahrenheit);
        Celsius = (Fahrenheit - 32) * 5/9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", Fahrenheit, Celsius);
    }
    else{
        printf("Invalid choice! Please select C or F\n");

    }
    
    
    return 0;
}