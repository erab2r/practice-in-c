#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= '0' && ch<= '9'){
        printf("Digit");
    }
    else{
        if(ch>= 'a' && ch<= 'z'){
        printf("Is small");
    }
    else{
        printf("Is capital");
    }

    }
    

    return 0;
}