#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
        public:

                int B_ID;

                Base()
                {
                        cout<<"\n Inside Base class of Constructor"<<endl;
                }
                ~Base()
                {
                        cout<<"\n Inside Base Class Of Destructor"<<endl;
                }
                void Display (int Num)
                {
                        cout<<"\n Inside Base Class Of Display FirstFunction"<<endl;
                }
                void Display (int N1,int N2)
                {
                       cout<<"\n Inside Base Class Of Second Function"<<N1<<"/t"<<N2;
                }
                void Accept()
                {
                        cout<<"\n Enter a Number:";
                }
};
class Derived : public Base
{
        private:
               int D_ID;

        public:
               int B_ID;

                Derived()
                {
                        this-> D_ID = 0;
                        this-> B_ID = 21;

                        cout<<"\n Inside Derived class of Constructor"<<endl;
                }
                ~Derived()
                {
                        cout<<"\n Inside a Derived class of Destructor"<<endl;
                }
                void Display(int Num)
                {
                        cout<<"\ Inside Derived Class of display Function"<<endl;
                }
};

int main()
{
        Derived Dobj;

        cout<<Dobj.Base::B_ID<<endl;

        getch();

        Dobj.Display(8);
        Dobj.Accept();

        Dobj.Base::Display(9);

        getch();
        return 0;
}
