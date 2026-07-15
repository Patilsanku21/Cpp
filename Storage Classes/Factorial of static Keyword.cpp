#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
        int No = 0,Res = 0;

        printf("\n Enter a Number Its Calculate Factorial :");
        scanf("%d",&No);

        Res = Factorial(No);

        printf("\n Factorial Of Number Is %d is %d",No,Res);

        getch();

        return 0;

}
int Factorial( int Num)
{
        static int Fact = 1;

        if(Num > 0)
        {
            Fact =  Num * Factorial(Num -1);

        }
        return Fact;
}

