# include<stdio.h>

int main()
{
    char lower,upper;
    printf("enter any lowercase number : ");
    scanf("%c\n",&lower);
    upper = toupper(lower);
    printf("lowercase number = %c\n",lower);


    return 0;

}
