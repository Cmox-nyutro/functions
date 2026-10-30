// recursion is a type of function who called itself

#include<stdio.h>
int factorial(int); //prototype
int factorial(int a){ //defination how it works
  if(a == 1 || a == 0){
    return 1;
  } 
  return factorial(a-1)*a;
}
int main(){  
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));
  return 0;
} 