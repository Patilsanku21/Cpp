#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int Book_Read();

int main()
{
    int RPage = 0, Tot_Pages = 0,Dcnt = 0;

    printf("\n Enter Total Number Of Pages :");
    scanf("%d",&Tot_Pages);

    for(Dcnt = 0; RPage < Tot_Pages ; Dcnt++)
    {
        RPage = Book_Read();

        printf("\n Pages Read By Day %d =%d",Dcnt + 1,RPage);

        getch();

    }
    printf("\n Congratulations You Have Complete Book %d Days ",Dcnt);

    getch();
    return 0;
}
int Book_Read()
{
    int Res = 10;

    int Pcnt = 0;

    printf("\n How Many Pages read Today :");
    scanf("%d",&Pcnt);

    Res = Res + Pcnt;

    return Res;
}
