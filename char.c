#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;
    char s[20], sen[100]; //array of characters

    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");             //below line wants to read /n before statement
    scanf("%[^\n]%*c", sen); //not an error
    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s \n", sen);
}