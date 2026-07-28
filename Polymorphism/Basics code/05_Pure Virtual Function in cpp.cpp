#include<iostream>
#include<Conio.h>
using namespace std;

class Base
{
        public:

            int B_ID;

                Base()
                {
                    cout<<"\n Inside Base Class Of Constructor"<<endl;
                }
                ~Base()
                {
                        cout<<"\n Inside Base class of Destructor"<<endl;
                }
               virtual void Display (int) = 0;

               void Accept()
               {
                    int No = 0;

                     cout<<"\n Enter a Number:"<<endl;
                     cin>>No;
               }
};
class Derived : public Base
{
        private:
               int D_ID = 0;

        public:
              int  B_ID = 0;

                Derived()
                {
                        this-> D_ID = 0;
                        this-> B_ID = 50;

                        cout<<"\n Inside Derived Class Of Constructor"<<endl;
                }
                ~Derived()
                {
                        cout<<"\n Inside Derived Class Of Destructor"<<endl;
                }
                void Display(int Num)
                {
                        cout<<"\n Inside Derived class of Display Function"<<Num<<endl;
                }
};

int main()
{
        Derived Dobj;

        Dobj.Display(20);
        Dobj.Accept();

        cout<<"\n Back To Main";

        getch();
        return 0;



}
