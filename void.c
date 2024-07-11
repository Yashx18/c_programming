#include <stdio.h>
int main(){
    
    return 0;
}
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  // Initialize the array with some values
//     int n;

//     printf("Enter Number (0 to 9): ");
//     scanf("%d", &n);

//     if (n < 0 || n > 9) {
//         printf("Invalid input! Please enter a number between 0 and 9.\n");
//     } else {
//         for (int i = 0; i <= n; i++) {
//             printf("%d\n", arr[i]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int arr[10];
//     // ={10,20,30,40,50}
//     int n ;
//     printf("Enter Number :");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
// 	int arr[5],i;
// 	printf("Enter value :");
// 	scanf("%d",&arr[i]);

// 	for (int i =0; i<=5;i++)
// 	{
// 		printf{
// 			("")
// 		}
// 	}

// 	return 0;
// }
// #include <stdio.h>
// int main() {
// 	//array declaration
// 	int rollNo[10];
	
// 	//taking inputs
// 	for(int i=0;i<10;i++)
// 	    scanf("%d",&rollNo[i]);
	
// 	//printing
// 	for(int i=0;i<10;i++)
// 	    printf("%d ",rollNo[i]);
// 	return 0;
// }

// // FOR LOOP 
// // for loop to print numbers 1 to 100.
// #include <stdio.h>
// int main(){
   
//   char  hi[20]="Hello world";
//   for (int i = 1; i <= 100; i++)
//   {
//     printf("%d \n",i);
//   }
  

//   return 0;
// }
// // for loop to print numbers in reverse order from 100 to 1.
// #include <stdio.h>
// int main(){
   
//   char  hi[20]="Hello world";
//   for (int i = 100; i >= 0; i--)
//   {
//     printf("%d \n",i);
//   }
  

//   return 0;
// }
// for loop to print string a ten times
// #include <stdio.h>
// int main(){
//   //  "i" is either called iterator variable; counter variable 
//   char  hi[20]="Hello world";
//   for (int i = 10; i >= 0; i--)
//   {
//     printf("%s \n",hi);
//   }
  

//   return 0;
// }

// Practice question : Print the numbers from  0 to 100:
// #include<stdio.h>
// int main(){
//   for(int i=0; i<=10; i++){
//     printf("%d \n",i);
//   }
//   return 0;
// }
// 
// For loop to print alphabets from A to Z;
// #include<stdio.h>
// int main(){

//  for(  char i='A'; i <= 'Z'; i++)
//  {
//   printf("%c \n", i);

//  }
//   return 0;
// }

// Counter variable can even be float or charachter
// #include<stdio.h>
// int main(){

//  for(  float i=1.0; i <= 2.0; i++)
//  {
//   printf("%f \n", i);

//  }
//   return 0;
// }

// Infinite Loop
// #include<stdio.h>
// int main(){

//   for (int i = 1; ; i++)
//   {
//     printf("Hello World");
  
//   }
//   return 0;
// }


// WHILE LOOP :
// #include<stdio.h>
// int main(){
//   int i =1;
//   while (i <= 100)
//   {
//     printf("%d \n",i);
//     i++;
//   }
  
//   return 0;
// }

// PRACTICE QUESTION PRINT THE NUMBER FROM 0 TO N , IF N IS GIVEN BY USER  ;
// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter number here :");
//   scanf("%d",&n );

//   int i=0;
//   while( i <= n){
//     printf("%d\n", i);
//     i++;
//   }

//   return 0;


// #include<stdio.h>
// int main(){
//   int i=0;
//   while(i<=10){
//     printf("%d \n",i);
//     i++;
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   for(int i=0; i<=10; i++){
//     printf("%d \n",i);
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//    int i=0;
//    do
//    {
//     printf("%d \n",i);
//     i++;
//    } while (i<=10);
   
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   int n ;
//   printf("Enter number here :");
//   scanf("%d",&n );
// int  sum=0;
// for(int i=1; i<= n ; i++ ){
//   sum = i+sum;
//   printf("%d \n",sum);
// }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//     int a= 0;
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);
//     printf("%d\n",++a);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a= 0;
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);
//     printf("%d\n",a++);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }