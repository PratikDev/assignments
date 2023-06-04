#include<stdio.h>

int ct_viva(int a, int b,int c)
{
    int s = a+b+c;
    return s;
}

int mid_final(int m,int f)
{
    int s = m+f;
    return s;
}

int main()
{
    int number;
    number = ct_viva(0,5,5 ) + mid_final(1,3);

    if(number>=80 && number<=100)
    {
        printf("Your result is A+\n");
    }
    else if(number>=75 && number<80)
    {
        printf("Your result is A\n");
    }
    else if(number>=70 && number<75)
    {
        printf("Your result is A-\n");
    }
    else if(number>=65 && number<70)
    {
        printf("Your result is B+\n");
    }
    else if(number>=60 && number<65)
    {
        printf("Your result is B\n");
    }
    else if(number>=55 && number<60)
    {
        printf("Your result is B-\n");
    }
    else if(number>=50 && number<55)
    {
        printf("Your result is C+\n");
    }
    else if(number>=45 && number<50)
    {
        printf("Your result is C\n");
    }
    else if(number>=40 && number<45)
    {
        printf("Your result is D\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;

}
