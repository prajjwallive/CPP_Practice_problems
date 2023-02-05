// Write a program to find the given number is Palindrome or not //
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, rem, rev = 0, orig;
    printf("Enter the number that you want to check?\n");
    scanf(" %d", &num);
    orig = num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num != 0);
    if (rev == orig)
    {
        printf("Given number is palindrome!\n");
    }
    else
    {
        printf("Given number is not palindrome!\n");
    }
    getch();
    return 0;
}