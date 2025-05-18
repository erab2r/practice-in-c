#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first_Digit = n/1000;
    if(first_Digit%2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}