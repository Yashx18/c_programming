#include<stdio.h>
// void hello(int count);
int main(){
   printf("start");
   main();
   printf("end");
    return 0;
}
// void hello(int count){
//     printf("Hello World!!");
// }
// #include<stdio.h>
// float cube(float num);
// int main(){
//     float num;
//     printf("Enter Number:");
//     scanf("%f",&num);

//     printf("%f",cube(num));
//     return 0;
// }
// float cube(float num){
//     return num * num * num;

// }
// #include<stdio.h>
// #include<math.h>
// float square(float side);
// float circle(float radius);
// float rectangle(float len , float width);
// int main(){
//     float side = 16;
//     printf("Area of square with side %f is %f",side,square(side));
//     float len=16 , width=30;
//     printf("\nArea of rectangle with length %f and width %f is %f",len, width, rectangle(len,width));
//     float radius =18; 
//     printf("\nArea of circle with radius %f is %f",radius,circle(radius));

//     return 0;
// }
// float square(float side){
//    return side *side;
// }
// float circle( float radius){
//    return 3.14*radius*radius;
   
// }
// float rectangle(float len , float width){
//    return len * width;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num;
//     printf("Enter number :");
//     scanf("%d",&num);
//     // num=2;
//     printf("%f",pow(num,2));
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5 ; i++){
//         for (int j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//         // printf("* ");
//     }
//     return 0;
//}
// #include<stdio.h>
// // int sum(int a , int b);
// void Table(int n);

// int main(){
//     int n;
//     printf("Enter Number :");
//     scanf("%d",&n);
//     // printf("Enter Second Number :");
//     // scanf("%d",&b);
//     // int s= sum( a,  b);
//     // printf("Sum is %d",s);
//     Table(n); //Variable used in calling is known as Argument/Actual parameter
   
//     return 0;
// }
// int sum(int a, int b){
//     return a + b;
// }
// void Table(int n){  formal parameter
//     for (int i = 1; i<=10;i++){
        
//         printf("%d\n",n * i);
//     }
//  }
// #include <stdio.h>

// // Function to print the multiplication table of a number
// void Table(int n);

// int main() {
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     Table(n); // Variable used in calling is known as Argument/Actual parameter
   
//     return 0;
// }

// void Table(int n) {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", n * i); // Use the correct format specifier
//     }
// }


