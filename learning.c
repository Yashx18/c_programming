#include<stdio.h>
int main(){
    int sum = 0, n;
    printf("Enter number:");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++){
         printf("%d\n",sum);
         sum=n;
       
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("Enter radius of circle :");
//     scanf("%f",&radius);
//     float area = 3.1415926535 * radius * radius;
//     printf("Area of circle with radius %f is %f",radius,area);
//     return 0;
// }  This code is to calculate the area of circle.

// #include <stdio.h>
// int main()
// {

//     float length, width, perimeter;
//     printf("Enter length of rectangle :");
//     scanf("%f", &length);
//     printf("Enter width of rectangle :");
//     scanf("%f", &width);
//     perimeter = 2 * (length + width);
//     printf("Perimeter of rectangle with %f and %f is %f", length, width, perimeter);

//     return 0;
// } This code is to calculate the perimeter of rectangle.

// #include <stdio.h>
// int main()
// {

//     float number, cube;
//     printf("Enter number :");
//     scanf("%f", &number);

//     cube = number * number * number;
//     printf("Cube of number %f is %f", number, cube);

//     return 0;
// } This code is to calculate the cube of a number.

//  #include <stdio.h>
//  #include <math.h>

//  int main(){
//     int b = 2 , c = 2;
//     int power = pow(b,c);
//     printf("%d",power);
//     return 0;
//  } In this code we have used a new library math.h it contains
//  all the functions of maths and a new function "pow" used to represent 2^4 and like 3^2.

// #include <stdio.h>

// int main() {

//  char ch;

//  printf("Enter a character: ");

//  scanf("c", &ch);

//  printf("ASCII value of %c = %d\n", ch, ch);

//  return 0;

// }
// #include <stdio.h>
// int main()
// {
//     float ans, a = 1.6, b = 1;
//     ans = a % b;

//     printf("%f", ans);
//     return 0;
// }
// //This code shows that % modulo operator does not work on float values and can be only be used with integer values.
// #include <stdio.h>
// int main()
// {

//     printf("%d", -5%2);
//     return 0;
// // } whenever our numerator is negative, our remainder is also negative


// #include <stdio.h>
// int main()
// {
//     int a= 4 , b = 5;
//     printf("%d\n", a !=b);
//         printf("%d\n", a ==b);
      
//     return 0;
// }

// Code to check whether charachter entered is a digit or not.
// #include <stdio.h>
// int main()
// {
//     char x;
//     printf("Enter Charachter :");
//     scanf("%c",&x);
//     if ( x >='0' && x<='9')
//     {
//         printf("It is a digit.");
//     } else{
//         printf("Not a digit");
//     }
//     return 0;
// }

// Program to check the smallest number out of 3.
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter first number :");
//     scanf("%d",&a);
//      printf("Enter second number :");
//     scanf("%d",&b);
//      printf("Enter third number :");
//     scanf("%d",&c);

//     if(a<b && a<c){
//         printf("%d is smallest",a);
//     } else if(b<a && b<c){
//         printf("%d is smallest",b);
//     } else if(c<a && c<b){
//         printf("%d is smallest",c);
//     }
   
      
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number :");
//     scanf("%d",a);
//     if(a>=1){
//         printf("Natural number");
//     }
//     else{
//         printf("Not natural number");
//     }
//     return 0;
// }

// STARTING FUNCTIONS IN C.


// #include<stdio.h>
// int main (){
//     void print(){
//         printf("Hello User !!");
//     }
//     print();

//     return 0;
// }

// #include<stdio.h>

// // function declaration / prototype
//  void Ph();
// int main(){
 
//    for(int i=1;i<=10;i++){
//    Ph() ; //funtion Call
//    }
//     return 0;
// }
//  void Ph(){
//     printf("Hello User !! \n"); //function definition
//     printf("You are currently using the system of YASH. \n");
//     printf("It is suggested that you should close the system after 5 minutes.");
//  }

// #include<stdio.h>
// void gh(); //funtion to print HELLO (declaration / prototype)
// void gb(); //function to print GOOD BYE (declaration / prototype)
// int main(){

//     gh(); //( function call)
//     gb(); //( function call)

//     return 0;
// }
// void gh(){
//     printf("Hello !!\n"); //( Definition)
// }
// void gb(){
//     printf("good bye :)\n");  //( Definition)
// }

//Write a function that prints Namaste if user is Indian & Bonjour if the user is french
// #include<stdio.h>
// void Indian();
// void French();
// int main(){
//     char ethnicity;
//     printf("Enter your ethnicity(F / I) :");
//     scanf("%c",&ethnicity);

//     if( ethnicity == 'I'){
//         Indian();
//     } else if( ethnicity == 'F'){
//         French();
//     } else {
//         printf("Enter Valid Nationality");
//     }
//     return 0;
// }
// void Indian(){
//     printf("Namaste\n");
// }
// void French(){
//     printf("Bonjour\n");
// }

// #include<stdio.h>
// int sum(int a , int b);
// int main(){
//     int a, b;
//     printf("Enter your first number");
//     scanf("%d",&a);
//     printf("Enter your second number");
//     scanf("%d",&b);

   
    
//     return 0;
// }
// int sum(int a , int b){
//     return 0;

// }