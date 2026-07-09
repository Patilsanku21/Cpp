using namespace std;
#include<iostream>
#include<conio.h>

class calc
{
    public:
        int N1 ,N2,Div;

        void set_Values()
        {
            cout<<"\n Enter a Two Numbers :";
            cin >>N1>>N2;

        }
        void Division()
        {
            cout<<"\n Inside Division"<<endl;
            Div = N1 / N2;

        }
};
int main()
{
    calc obj1,obj2,obj3;

    obj1.set_Values();
    cout<<"\n Back To main"<<endl;

    obj1.Division();

    cout<<"\n Back To Main"<<endl;

    cout<<"\n Division of"<<obj1.N1<<"And"<<obj1.N2<<"is :"<<obj1.Div<<"";

    getch();
    return 0;
}
