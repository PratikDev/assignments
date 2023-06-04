#include<stdio.h>

int ct_viva(int a, int b,int c)
{
    int s=a+b+c;
    return s;
}

int mid_final(int m,int f)
{
    int v=m+f;
    return v;
}

int cgpa(int number)
{
    if(number>=80 && number<=100)
    {
        printf("Your result is A+\n");
    }
    else if(number>=70 && number<80)
    {
        printf("Your result is A\n");
    }
    else if(number>=60 && number<70)
    {
        printf("Your result is A-\n");
    }
    else if(number>=50 && number<60)
    {
        printf("Your result is B\n");
    }
    else if(number>=40 && number<50)
    {
        printf("Your result is C\n");
    }
    else if(number>=33 && number<40)
    {
        printf("Your result is D\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}

int main()
{
    int number;
    number = ct_viva(5,1,35 ) + mid_final(15,55);

    cgpa(number);

    return 0;
}