#include <stdio.h>
#include <stdbool.h>

//logical Operators 
    // && means AND
    // || means OR
    // ! not 

int main(){
    int temp = 20;
    if(temp > 0 && temp < 30){         //both conditions must be true 
        printf("W temp\n");
    }
    else{
        printf("L TEMP\n");
    }

    int miles = -5;
    if (miles <= 0 || miles >= 30){           //Only one of the conditions must be true 
        printf("Not far\n");
    }
    else{
        printf("far\n");
    }

    bool rainy = true;
    if(!rainy){                                 // if rainy isn't true print raint outside, since in this case rainy is set to true it doesn't 
        printf("it is rainy outside");          //pass this condition and goes to else where its not rainy
    }
    else{
        printf("not rainy");
    }

    return 0;
}