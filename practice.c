// #include <stdio.h>
// int main()
// {
//     int cash1, cash2, total;
//     printf("Enter the amount you have :");
//     scanf("%d", &cash1);
//     printf("Enter the amount you have :");
//     scanf("%d", &cash2);

//     total = cash1 + cash2;
//     printf("Total cash available is %d", total);

//     return 0;
// }

// Use of && AND operator if both the conditions are true only then output will be 1(true).
// #include <stdio.h>
// int main(){
//     printf("%d",4<5 && 3>2);
//     return 0;
// }

// Use of || OR operator if any or both of the condition is true then output will be 1(true) and if all the condition is 0(false) then output will be false.
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",4<5 || 3>2);
//     return 0;
// }
// Use of ! NOT operator if the output is going to be 0(False) then the output will be 1(True) by using the ! NOT operator 
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%d",!(4<2));
//     return 0;
// }
// output was supposed to be 0(False) but it will be 1(True)
// ASSIGNMENT OPERATORS(SHORT HAND OPERATORS)
// #include<stdio.h>
// #include<math.h>
//  int main (){
// int a = 1 , b =2 ;
// // a = a + b; this is the original approach 
// // a+=b; this is the short hand apprach using assignment operator and this method used with all the arithmetic operators like +,-,/,*,%
// printf("%d",a);
//     return 0;
//  }
// Practice Ques : Write a program in C to check if a number is divisible by 2 or not.
// Output 1 means divisible and 0 means not divisible.
// #include <stdio.h>
// #include <math.h>
//  int main (){ 
//      int num, div;
//      printf("Enter number here :");
//      scanf("%d",&num);
//    printf( "%d", div = num % 2 == 0);
// return 0;}
// #include <stdio.h>
// #include <math.h>
// int main (){
//     int isSunday = 1 , isSnowing=1;
//     printf("%d", isSunday && isSnowing) ;
// return 0}; 
// #include <stdio.h>
// #include <math.h>
// int main (){
//     int num1 ;
//     printf("Enter number here :");
//     scanf("%d",&num1);
//     printf("%d\n", num1 > 9 && num1 < 100) ;
// return 0; }

// #include <stdio.h>
// #include<math.h>
//  int main (){
//     int age ;
//     char name[20];
//     printf("Enter name here :");
//     scanf("%s",&name);
//      printf("Enter age here :");
//     scanf("%d",&age);

//     if (age<18 )
//     {
//         printf("%s is not an adult\n",name);
//           }

//     else{
//         printf("%s is an adult\n",name);
//          printf("%s can vote\n",name);
//           printf("%s can drive\n",name);

//     printf("Thank you");

//     }
// return 0;
//  }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int percentage;

//     printf("Enter percentage here :");
//     scanf("%d", &percentage);

//     if (percentage >= 90)
//     {
//         printf("Grade A++");
//     }
//     else if (percentage < 90 && percentage >= 80)
//     {
//         printf("Grade A+");
//     }
//     else if (percentage < 80 && percentage >= 70)
//     {
//         printf("Grade B");
//     }
//     else if (percentage < 70 && percentage >= 60)
//     {
//         printf("Grade C");
//     }
//     else if (percentage < 60 && percentage >= 50)
//     {
//         printf("Grade D");
//     }
//     else if (percentage < 50 && percentage >= 33)
//     {
//         printf("Grade E");
//     }
//     else
//     {
//         printf("Fail");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num;
//     printf("Enter number here :");
//     scanf("%d", &num);

//     num >= 99 ? printf("Three digit number") : printf("Two digit number");
//     // in this above line "Ternary operator" is used, it reduces the number of lines used to state a conditional statement.
  

//     }


// #include <stdio.h>
// #include<math.h>
//  int main(){
//     int day;
//     printf("Enter day number(1 to 7):");
//     scanf("%d",&day);
//     // Use of Switch statement instead of if/else-if/else
//     switch(day){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thursday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("Enter valid day between 1 to 7");
//     }
//     return 0;
//  }

// Practice Question  
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter marks here(0-100):");
//     scanf("%d",&marks);

//     // IF/ELSE WAY
//     // if (marks<=30)
//     // {
//     //     printf("Fail");
//     // } else if( marks>30 && marks<=100) {
//     //     printf("Pass");
//     // } else {
//     //     printf("Enter valid marks");
//     // }
    
// // TERNARY WAY
// marks<=30?printf("Fail \n") : printf("Pass \n");

//     return 0;
// }

// #include <stdio.h>
//  #include <math.h>
//  int main()
//  {
//      int marks;

//     printf("Enter marks here :");
//      scanf("%d", &marks);

//      if ( marks <=100 && marks >= 90)
//     {
//          printf("Grade A+");
//      }
//      else if (marks < 90 && marks >= 70)
//      {
//          printf("Grade A");
//      }
//      else if (marks < 70 && marks >= 30)
//      {
//         printf("Grade B");
//     }
//     else if(marks < 30 )
//     {
//         printf("Grade C");
//         return 0; }
//         else{
//             printf("Enter valid  marks");
//         }
//  }
// CODE TO DETERMINE WHETHER CHARACHTER ENTERED IS UPPERCASE OR LOWERCASE
// #include<stdio.h>
// int main(){
//    char ch;
//    printf("Enter charachter :");
//    scanf("%c",&ch);

//    if (ch >= 'A' && ch <= 'Z'){
//     printf("UPPERCASE");
//    } else if(ch >= 'a' && ch <= 'z'){
//      printf("LOWERCASE");

//    } else {
//     printf("not an english letter\n");
//    }

//     return 0;
// }