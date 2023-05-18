#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function...


void calculate_the_maximum(int n, int k) {
  
  int m_1=0,m_2=0,m_3=0;
    for(int a=1;a<n;a++){
        for(int b=a+1;b<=n;b++){
            if((a&b)<k){
              if(m_1<(a&b)){
                 m_1=(a&b);
                 
                 }
            }   if((a|b)<k){
                     if(m_2<(a|b)){
                         m_2 = (a|b);
                     }
                 }
              
                if((a^b)<k){
                 if(m_3<(a^b)){
                      m_3 = (a^b);
                  
                 }
             } 
         } 
    
    }
   printf("%d\n%d\n%d",m_1,m_2,m_3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);  
 
    return 0;
}

