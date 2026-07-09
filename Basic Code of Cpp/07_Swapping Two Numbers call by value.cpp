
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std

void swap(int& ,int&);

int main()
{
    int N1 = 0,N2 = 0;

    cout<<"\n Enter a First Number :";
    cin >> N1;

    cout<<"\n Enter a Second Number :";
    cin>>N2;

    cout<<"\n Before Swapping Two Values"<<N1 <<N2 <<"";

    swap(N1,N2);

    cout<<"\n After swapping Two Values "<< N1 << N2 <<"";

    getch();
    return 0;

}
void  swap(int No1,int No2)
{
    int Temp = 0;

    cout<<"\n Inside Swap Function ....\n ";

    Temp = No1;
    No1  =No2;
    No2  =Temp;
}
