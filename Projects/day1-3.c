#include <stdio.h> //Preprocesser Directive: Telling complier to include the stanadrd input and output libaray 
#include <stdbool.h>
#include <string.h>
// OVERVIEW 
    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

int main(){
    //First C program yerrr
    
    //Ints
    int age = 40;
    int year = 2000;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("you were born in %d\n", year);
    printf("You ordered %d monkey\n", quantity);


    //Floats
    float gpa = 1.8;
    float price2 = 180;
    float temp = -10.1;

    //Putting %.numf says that this is the number of decimal points 
    printf("The price is %.2f\n", price2);
    printf("your gpa is %.1f \n", gpa); 
    printf("The temperature is %.1f F degrees \n", temp);

    //doubles 

    double pi = 3.14159265359;
    double e = 2.718281828459;

    printf("value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    //Characters
    char grade = 'A';
    char symbol = '!';
    char currencyType = '$';

    
    // %c helps format char variable
    printf("Your grade is %c\n", grade);


    //String is a series of characters, but instead of 
    
    char name[] = "Lore";
    char food[] = "Burger";
    char email[] = "minecraftiron@gmail.com";
    
    
    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Email is minecraftiron@gmail.com");


    //Booleans are true or false
    //1 means true, 0 means false
    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;
    
    printf("%d", isOnline);
    if(isOnline){
        printf("You are ONLINE");
    }
    else{
        printf("you are OFFLINE");
    }

    if(isStudent){
        printf("You are STUDENT");
    }
    else{
        printf("you are not a STUDENT");
    }


     if(forSale){
        printf("Item is for sale");
    }
    else{
        printf("GET OUT MY STORE");
    }


    // Format specifier = Special tokens that begin with a % symbol,
    //                                   followed by a character that specifies the data type
    //                                   and optional modifiers (width, precision, flags).
    //                                   They control how data is displayed or interpreted.


    int a = 20;
    float price3 = 19.99;
    double pi2 = 3.1415926535;
    char currency = '$';
    char name1[] = "Jack";

    printf("%d\n", a);
    printf("%f\n", price3);
    printf("%lf\n", pi2); // f & lf both work for double
    printf("%c\n", currency);
    printf("%s\n", name1);

    //width
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+3d\n", num1);
    printf("%+4d\n", num2);
    printf("%+4d\n", num3);

    //Precision
    float price4 = 19.99;
    float price5 = 1.50;
    float price6 = -100.00;

    printf("%.1lf\n", price4);
    printf("%.2lf", price5);
    printf("%.3lf\n", price6);

    

    //Flags
    printf("%+7.1lf\n", price4);
    printf("%+7.2lf", price5);
    printf("%+7.3lf\n", price6);


    int x = 10;
    int y = 3;
    int z = 0;

    z = x % y;
    printf("%d\n", z);
    printf("Hello\n");

    int a2 = 0;
    float grr = 0.0f;
    char gra = '\0'; // Null terminator 
    char names[30] = "";

    printf("Enter your age: ");
    scanf(" %d", &a2);

    printf("Enter your grr: ");
    scanf(" %f", &grr);

    printf("Enter your gra: ");
    scanf(" %c", &gra);

    getchar();
    printf("Enter your First name dumbass: ");
    fgets(names, sizeof(names), stdin);
    names[strlen(names-1)]  = '\0';




    printf("%d\n", a);
    printf("%f\n", grr);
    printf("%c\n", gra);
    printf("%s\n", names);



    return 0;

    


}
