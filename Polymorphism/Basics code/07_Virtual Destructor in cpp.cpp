#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
        public:

                Base()
                {
                        cout<<"\n Inside Base class of Constructor"<<endl;
                }
                virtual ~Base()
                {
                        cout<<"\n Inside Base Class of Destructor"<<endl;

                }
};
class Derived : public Base
{
            public:
                    Derived()
                    {
                            cout<<"\n Inside Derived Class of Constructor"<<endl;
                    }
                    ~Derived()
                    {
                            cout<<"\n Inside Derived Class Of Destructor"<<endl;
                    }
};
int main()
{
    cout<<"\n Sizeof "<<sizeof(Base)<<sizeof(Derived)<<endl;

    getch();

    Base *bptr = new Derived();

    delete bptr;

    getch();

    return 0;
}
