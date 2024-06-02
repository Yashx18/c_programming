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

#include <stdio.h>
#include <math.h>
int main()
{
    int percentage;

    printf("Enter percentage here :");
    scanf("%d", &percentage);

    if (percentage > 90)
    {
        printf("Grade A++");
    }
    else if (percentage > 80 && percentage < 90)
    {
        printf("Grade A+");
    }
    else if (percentage < 80 && percentage > 70)
    {
        printf("Grade B");
    }
    else if (percentage < 70 && percentage > 60)
    {
        printf("Grade C");
    }
    else if (percentage < 50 && percentage > 60)
    {
        printf("Grade D");
    }
    else if (percentage < 50 && percentage > 33)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
