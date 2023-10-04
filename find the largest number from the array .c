#include <stdio.h>

int main()
{  int size ;
    
printf("Enter the size of  array ");
scanf("%d",&size);

int arr[size];
int max;
printf("Enter the element of array  ");
for(int i =0;i<size;i++){
scanf("%d",&arr[i]);
} 
  max=arr[0];
  
  for(int i =0;i<size;i++){
     if(arr[i]>max){
         max=arr[i];
     } 
     
      
     }
     printf(" The maximum number is %d,max");

     return 0;
}
