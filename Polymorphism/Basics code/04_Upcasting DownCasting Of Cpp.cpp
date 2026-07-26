#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
            public:
                    int B_id;

                    Base()
                    {
                        cout<<"\n Inside Base class Of Constructor"<<endl;
                    }
                    ~Base()
                    {
                        cout<<"\n Inside Base Class of Destructor"<<endl;
                    }
                    virtual void Display(int Num)
                    {

                        cout<<"\n Inside Base class of Display Function"<<endl;
                    }
                    void Accept()
                    {
                        cout<<"\n Enter a Number :"<<endl;
                        cin>>B_id;
                    }
};
class Derived : public Base
{
            private:
                    int D_id;

            public:
                        int B_id;

                    Derived()
                    {
                        cout<<"\n Inside Derived Class of Constructor"<<endl;
                    }
                    ~Derived()
                    {
                        cout<<"\n Inside Derived Class Of Destructor"<<endl;
                    }
                    void Display(int Num)
                    {
                        cout<<"\n Inside Derived Class Of Function"<<Num<<endl;
                    }

};
int main()
{
        Derived dobj;

        Base *bptr = &dobj;

        bptr -> Accept();
        cout<<"\n Back to Main"<<endl;
        getch();

        bptr -> Display(20);
        cout<<"\n Back to Main"<<endl;
        getch();

        getch();
        return 0;

}
