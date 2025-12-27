#include <stdio.h>
#include <math.h>

int main(){
    int choice = 0;
    float lbs = 0.0f;
    float kg = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kiligrams\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        //kg to pounds
        printf("Enter the weight in kg: ");
        scanf("%f", &kg);
        lbs = kg * 2.20462;
        printf("%.2f2 kg is equal to %.2f lbs", kg,lbs);
    }
    else if(choice == 2){
        //pounds to kilograms 
        printf("Enter the weight in pounds: ");
        scanf("%f", &lbs);
        printf("%.2f, lbs is equal to %.2f kg", lbs,kg);
    }
    else{
        printf("Invalid choice! Please enter 1 or 2\n");
    }



    return 0;
}