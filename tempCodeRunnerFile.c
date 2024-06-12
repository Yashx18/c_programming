
// #include <stdio.h>
// int main()
// {
//    // for(int i = 1; i <= 9  ; i++){
//    //    printf("%d\n",i) ;
//    // }
//    // return 0;
//    // int i=1;
//    // while (i<=9)
//    // {
//    //   printf("%d\n",i) ;
//    //   i++;
//    // }

//    // int i= 1;
//    // do
//    // {
//    // printf("%d\n",i) ;
//    // i++;
//    // } while (i<=9);
// //    int sum = 0, n;
// //    printf("Enter Natural number :");
// //    scanf("%d", &n);

// //    for (int i = 1; i <= n; i++)
// //    {
// //       sum = sum + i;
     
// //    }
// //    printf("%d\n", sum);

// // for(int i=n; i>=1; i--){
// //    printf("%d\n",i);
// //    }

// int n, sum=0;
// printf("Enter a natural number :");
// scanf("%d",&n);


// for( int i=1; i>=n; i++){
//    sum = sum + i;
//    printf("%d\n",sum);
// }

//    return 0;
// }



// #include <stdio.h>
// int main() {    
// int n;
// printf("Enter a natural number :");
// scanf("%d",&n);
// int  sum=0;
// for( int i=1, j=n; i<=n && j>=1; i++,j--){
//    sum = sum + i;
//    printf("%d\n",j); 
// }
//    printf("%d\n",sum);
//    return 0;
// }

// Loop to print table of any number
// #include<stdio.h>
// int main(){
//    int n;
//    printf("Enter a number :");
//    scanf("%d",&n);

//    int table;
//    for(int i=1; i<=10; i++){
//       table=n*i;
//       printf("%d\n",table);
//    }
//    return 0;
// }
// #include<stdio.h>
// int main(){
//    for(int n;;){
//    printf("Enter a number :");
//    scanf("%d",&n);
//    if (n%7==0)
//    {
//       printf("Multiple of 7 found");
//       break;  
//    }
//    }
//    return 0;
// }

// USE OF CONTINUE STATEMENT TO PRINT THE EVEN NUMBERS AND IGNORE ALL THE ODD NUMBERS("CONTINUE STATEMENT IS USED TO SKIP THE UNWANTED OUTPUT")

// #include<stdio.h>
// int main(){
//    for (int i = 1; i <= 10; i++)
//    {
//       if(i%2!=0){
//          continue;
//       }
//       printf("%d\n",i);
//    }
   
//    return 0;
// }
//  

// Loop to print the FACTORIAL of N number.
// #include<stdio.h>
// int main(){
//    int n ,factorial = 1;
//    printf("Enter number here :");
//    scanf("%d",&n);
//    for(int i =1;i<=n;i++){
//       factorial=factorial*i;
//       printf("%d\n",factorial);
//    }
//    return 0;
// }

// Loop to print any table in reverse using for loop.
// #include<stdio.h>
// int main(){
//    int n ;
//    printf("Enter number here :");
//    scanf("%d",&n);
   
//    int  table;
//    for (int i = 10; i >=1; i--)
//    {
//       table=n*i;
//       printf("%d\n",table);
//    }
//    return 0;
// }


// #include<stdio.h>
// int main(){
//    int sum=0;
//    for (int i = 5; i <=50; i++)
//    {
//       sum=sum+i;
//       printf("%d\n",sum);
//    }
  

//    return 0;
// }