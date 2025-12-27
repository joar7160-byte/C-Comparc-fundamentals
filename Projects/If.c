#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name \n");
    }
    else{
        printf("Hello %s no one loves you", name);
    }







    int age = 0;
    printf("\nEnter your age: ");
    scanf("%d", &age);
   if(age >= 65){
        printf("You are an old holy");
    }
    else if(age >= 18){
        printf("You are a adult\n");
    }
    else if (age < 0 ){
        printf("You are not alive!");
        
    }
    else if(age == 0){
        printf("Say Hello world");

    }

    else{
        printf("smh You are a kid");
    }

    bool isStudent = true;
    if(isStudent == true){
        printf("You are a student\n");
    }
    else{
        printf("You are not a student\n");
    }

    

    return 0;
}