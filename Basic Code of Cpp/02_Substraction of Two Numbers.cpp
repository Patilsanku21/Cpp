using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    public:
            int N1,N2,sub;

            void set_values()
            {
                cout<<"\n Enter a Two Numbers:";
                cin>>N1 >> N2;

            }
            void Substraction()
            {
                cout<<"\n inside sub"<<endl;
                sub = N1 - N2;
            }
};
int main()
{
     Calc obj1,obj2,obj3;

     obj1.set_values();

     cout<<"\n Back to Main"<<endl;

     obj1.Substraction();

     cout<<"\n Back To Main"<<endl;

     cout<<"\n substraction of"<<obj1.N1<<"and"<<obj1.N2<<"is:"<<obj1.sub<<"";

     getch();

     return 0;
}
