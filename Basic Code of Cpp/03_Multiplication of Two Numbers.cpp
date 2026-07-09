using namespace std;
#include<iostream>
#include<conio.h>

 class clac
 {
    public:
        int N1 ,N2, Mul;

        void set_Values()
        {
            cout<<"\n Enter Two Numbers:"<<endl;
            cin>> N1 >> N2;

        }
        void Multiplication()
        {
            cout<<"\n Inside Mul"<<endl;
            Mul = N1 * N2;
        }
 };
 int main()
 {
    clac obj1 ,obj2,obj3;

    obj1.set_Values();

    cout<<"\n Back To Main"<<endl;

    obj1.Multiplication();

    cout<<"\n Back To Main"<<endl;

    cout<<"\n Multiplication of"<<obj1.N1<<"And"<<obj1.N2<<"is :"<<obj1.Mul<<"";

    getch();
    return 0;
 }
