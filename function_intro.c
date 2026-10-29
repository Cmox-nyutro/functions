// what is function in c 
// function is a block of code who prtform a specific task 
// is like calculator  +,-,*,/ logcis save in function
// programmer/user is reuse and manage of code ya specific task/given task


// #include<stdio.h>
// int sum(int,int);//function prototype:define for tell compiler we define function    

// // function defination :How it is work
// int sum(int x,int y){
//     printf("Enter the sum is %d \n",x+y);
//     return x+y;
// } 
// int main(){ 
//   int a = 56;
//   int b = 45;
//   sum(a,b);
 
//   int k = 35;
//   int n = 35;
//   sum(k,n); //function call
//   return 0;
// }
// it  is 2 types of fucntion in c
// 1)library function(built-in/predefine)//
// 2)user-defined function//
// pre defined/library function:-printf,scanf,strlen,loop,codionol statment
//user-defined fucntion:-int sum(a,b),void hello

// ===============void=========
// void mean no value  mean it is no return  value but we can make this 
// void hello(){
//     printf("hello");
// }
// parameters function name(int x ,int y)
// arguments (1,4)
// -------------------------------------------------------------------
//Find the are of the sqaure//
// in this case we use pow function  
// pow funcition is return double datatype

#include<stdio.h>
#include<math.h>
int main (){
    int a = 5;
    printf("The area of a sqaure %.2f",pow(a,2));
    return 0;
}