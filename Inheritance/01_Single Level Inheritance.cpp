#include<iostream>
#include<conio.h>
using namespace std;

class Karad
{
    public:
            int a,b;

    Karad()
    {
        cout<<"\n Karad :: Constructor"<<endl;

    }
    ~Karad()
    {
        cout<<"\n Karad :: Destructor"<<endl;

    }
    void Fun()
    {
        cout<<"\n Karad :: Fun()"<<endl;

    }
};
class Pune : public Karad
{
    public:
            int x,y;
            Pune();
            ~Pune();
            void fun();

};
Pune :: Pune()
{
    cout<<"\n Pune :: constructor"<<endl;
}
Pune :: ~Pune()
{
    cout<<"\n Pune :: Destructor"<<endl;
}
void Pune::fun()
{
    cout<<"\n  Pune :: Fun()"<<endl;
}
int main()
{
        Karad K1;
        K1.a= 44;
        getche();

        Pune P1;
        getche();

        P1.a = 200;
        P1.x  = 300;

        cout<<"\n endl<<Sizeof(K1)"<<endl;

        getch();
        return 0;
}
