#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{
        int No = 0;

        No = Book_Read();
        printf("\n pages Read By Day 1 :%d",No);

        No = Book_Read();
        printf("\n Pages Read By Day 2 : %d",No);

        No = Book_Read();
        printf("\n Pages Read By Day 3 :%d",No);

        getch();

        return 0;

}
int Book_Read()
{
        static int Res = 0;

        int Pcnt = 0;

        printf("\n How Many Book Read By Today :");
        scanf("%d",&Pcnt);

        Res = Res + Pcnt;

        return Res ;
}
