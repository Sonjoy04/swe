# include<stdio.h>
int main()
{
    int year;

    printf("Enter any year : ");
    scanf("%d\n",&year);

    if(year%100==0)
        printf("leap year");
    else if(year%4==0 && year%100!=0)
        printf("leap year");
    else
        printf("not a leap year");

    return 0;


}
