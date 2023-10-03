
#include <stdio.h>

int main() {
    // Write C code here
    int num,counter=0;
    printf("enter the number");
    scanf("%d",&num);
    
    while(num>0){
    counter++;
    num =num/10;
    
    } printf("The number of digit are  is :%d",counter);

    return 0;
}
