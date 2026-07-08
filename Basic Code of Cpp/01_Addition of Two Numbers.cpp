using namespace std;
#include<iostream>
#include<conio.h>

 class clac
 {
    public:
            int N1,N2,Sum;

            void set_values()
            {
                cout<<"\n Enter a Two Numbers :";
                cin>>N1>>N2;
            }
            void Addition()
            {
                cout<<"\n Inside Addition"<<endl;
                Sum = N1 + N2 ;
            }
 };

 int main()
 {
    clac obj1,obj2,obj3;

    obj1.set_values();

    cout<<"\n Back to Main"<<endl;

    obj1.Addition();

    cout<<"\n Back To Main"<<endl;

    cout<<"\n Addition of"<< obj1.N1 <<"And"<< obj1.N2 << "is =" <<obj1.Sum<<"";

    getch();
    return 0;

 }

