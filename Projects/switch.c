#include <stdio.h>

int main(){
    int dayOfweek = 100;

    //switch a more efficent alternative to if-else statements
    //better with fixed integer values and chars

    if (dayOfweek == 1){
        printf("Monday");
    }
    else if (dayOfweek == 2){
        printf("Tuesday");
    }
     else if (dayOfweek == 3){
        printf("Wednesday");
    }
    else if(dayOfweek == 4){
        printf("Thursday");
    }
    else if(dayOfweek == 5){
        printf("Friday");
    } else if(dayOfweek == 6){
        printf("Saturday");
    }
    else if(dayOfweek == 7){
        printf("Sunday");
    }
    else{
        printf("bruh\n");
    }
  

    //If else vs switch 

    char DAYOFWEEK = '\0';
    printf("Pick a day of the week (M, T, W, Y, F, S, U): ");
    scanf("%c", &DAYOFWEEK);

    switch(DAYOFWEEK){
        case 'M':
            printf("Monday");
            break;                        //Break statements are important because if they are not there they will go to the next 
        case 'T':                           //case from that point and onward
            printf("Tuesday");
            break;
        case 'W':
            printf("Wednesday");
            break;
        case 'Y':
            printf("Thursday");
            break;
        case 'F':
            printf("Friday");
            break;
        case 'S':
            printf("Saturday");
            break;
        case 'U':
            printf("Sunday");
            break;
        default:
            printf("Invalid! Please enter 1-7!");
    }
      return 0;


}
