#include<stdio.h>
#include<stdlib.h>
long int multiplyNumbers(int n,int z);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    long int res= multiplyNumbers(2,n-1);
    printf("Factorial of %d = %ld", n,res);
    return 0;
}

long int multiplyNumbers(int n,int z) {
   int i=0;
   if(z>=1){
       
     return multiplyNumbers((n*2),z-1);
   }else
   printf("Factorial of %d",n);
   printf("\n");
   return n;
//exit(1);
}