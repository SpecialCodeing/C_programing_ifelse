#include<stdio.h>

int main()
{
    int age = 19;
    printf("your age is % d \n",age);
    if (age >= 18){
    printf("you are eligible to vote \n");
    } else {
    printf("you are not eligible to vote\n");
    }
    
    int marks = 36;
    printf("your marks is %d \n",marks);
    if (marks >= 90){
    printf("your grade is A \n");
    } else if ( marks >= 60){
    printf("your grade is B\n");
    } else if (marks >= 30){
    printf("your grade is C\n");
    } else {
    printf("you are fail \n");
    }
    
    int day;
    printf("please enter your day (1-7)\n");
    scanf("% d \n",&day);
    printf("your enter day is % d \n",day);
    switch (day)
{
    case 1 : printf("Monday \n"); break;
    
    case 2 : printf("Tuesday \n"); break;
    
    case 3 : printf("Wednesday \n"); break;
    
    case 4 : printf("Thursday \n"); break;
    
    case 5 : printf("Friday \n"); break;
    
    case 6 : printf("Saturday \n"); break;
    
    case 7 : printf("Sunday \n"); break;
    
    default : printf("Not a valid day number \n");
}

    int game = 55;
    game >= 50 ?
    printf("You win this Game \n") : printf("You loss this Game \n");
     
    int num = 55; 
    int num1 ;
    printf("please enter your num1 \n");
    scanf("% d \n",&num1);
    printf("your num1 is % d \n",num1);
    while (num1 != num){
    
    printf("please again gaise num1 \n");
    scanf("% d \n",&num1);
    }
    printf("you winner of num1 game \n");
    
    int num2 ;
    printf("please enter your num2 for test even or odd \n");
    scanf("% d \n",&num2);
    printf("your num2 is % d \n",num2);
    if (num2 % 2 == 0){
    printf("your number is even \n");
    } else {
    printf("your number is odd \n");
    }
    return 0;
}