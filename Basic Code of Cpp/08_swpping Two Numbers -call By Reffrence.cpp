#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void swap(int&, int&);

int main()
{
    int N1 = 0, N2 = 0;

    cout << "\n Enter First Number :";
    cin >> N1;

    cout<<"\n Enter Second Number :";
    cin >> N2;

    cout<<"\n Before Swap = Number1 ="<< N1 <<" ,Number2 =" << N2 << "";

    swap(N1,N2);

    cout<<"\n After swap = Number1 ="<< N1 <<", Number2 = "<<N2 << "";

    getch();
    return 0;
}
void swap(int& No1,int& No2)
{
    int Temp = 0;

    cout<<"\n Inside Swap Function ..\n";

    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
