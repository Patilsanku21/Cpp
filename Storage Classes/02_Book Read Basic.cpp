#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int Book_Read();

int main()
{
    int No = 0;

    No = Book_Read();
    printf("\n Pages Read By Day 1 :%d",No);

    No = Book_Read();
    printf("\n Pages Read By Day 2 : %d",No);

    No = Book_Read();
    printf("\n Pages Read By Day 3 : %d",No);

    getch();
    return 0;
}
int Book_Read()
{
    int Res = 10;

    int Pcnt = 0;

    printf("\n How Many Pages Read Today :");
    scanf("%d",&Pcnt);

    Res = Res + Pcnt;


    return Res;
}
