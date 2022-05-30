# include<stdio.h>
int main()
{
    int ch;
    printf("Enter any letter : ");
    scanf("%c\n",&ch);
    if(ch>='A',&& ch<='Z')
        printf("%c\n",captial);
    else if(ch>='a',&& ch<='z')
        printf("%c\n",small);

    else
        printf("%c\n",not a letter);

    return 0;
}
