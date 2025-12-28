#include <stdio.h>

// int result = 0;  //Global scope (harder to debug)

int add(int x, int y){
    int result = x + y;
    return result;
}


int sub(int x, int y){   
    int result = x - y;
    return result;
}

int main(){
    //Variable scopre means a variable is able to be indentified and accessible
    
    int result = add(5,6);
    printf("%d\n", result);

    int result2 = sub(10,7);
    printf("%d\n", result2);


    return 0;
}