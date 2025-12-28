#include <stdio.h>
#include <stdbool.h>

int main(){
    float price = 10.00;
    bool student = true;  // 10% discount
    bool senior = true; // 20% discount
    //Student & Senior 30% discount

    if(student == true){                                           //loop runs if you are a student then checks if you are a senior
        if (senior == true)                                        //if you are both then you get the 30% discount 
        {
            printf("You get a student discount of 10%\n");
            printf("You get a senior discount of 20%\n");
            price *= 0.7;
        }
        else{                                                      //Else statement is if you are not a senior but a student then the 10% discount is applied
            printf("You get a student discount of 10%\n");
            price *= 0.9;
        }
    }                                                              //If you are a senior then the student == true wouldn't run but this else statment would
    else{                                                          //check if you are indeed a senior and then apply the 20% percent discount
         if (senior == true)
        {
            printf("You get a senior discount of 20%\n");
            price *= 0.8;
        }
    }
    printf("The price of a ticket is: $%.2f\n", price);
    return 0;
}