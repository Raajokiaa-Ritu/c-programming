#include<stdio.h>

///Q-1: how many ways variables can be initialized?
///Q-2: how many places variables can be used?

int number2 = 105; //global variable
int number1 = 111;
///float number1; --> wrong, variable cannot be duplicated
float ff;
double d;

int main()
{
    int number1 = 101; //local variable
    float sal,val,ans;

    /// if local and global variable has same name
    /// local variable will get the priority first
    printf("number 1 is = %d\n", number1);
    printf("number 2 is = %d\n", number2);

}
