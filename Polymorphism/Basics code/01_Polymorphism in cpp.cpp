#include<iostream>
#include<conio.h>
using namespace std;

class  Base
{
            public :
                            int B_ID;

                            Base()
                            {
                                            this->B_ID = 500;
                                            cout<<"\n Inside Base Constructor"<<endl;
                            }

                            ~Base()
                            {
                                            cout<<"\n Inside Base Destructor"<<endl;
                            }

                            void  Display(int No)
                            {
                                    cout<<"\n Inside Base Class Display First Function "<< No;
                            }

                            void Display(int N1, int N2)
                            {
                                    cout<<"\n Inside Base Class Display second Function "<< N1<< "\t"<<N2;
                            }

                            void Accept()
                            {
                                    cout<<"\n Enter a Number : "<<endl;
                            }
};

class  Derived : public  Base
{
                private:
                            int  D_ID;

                public :
                            int B_ID;             // Characteristics Redefinition

                             Derived()
                            {
                                            this->D_ID = 0;
                                            this->B_ID = 21;
                                            cout<<"\n Inside Derived Constructor"<<endl;
                            }

                            ~Derived()
                            {
                                            cout<<"\n Inside Derived Destructor"<<endl;
                            }

                            void  Display(int No)
                            {
                                    cout<<"\n Inside Derived Class Display Function "<< No<<endl;
                            }
};

int main()
{
                Derived Obj;

                cout<<Obj.B_ID<<endl;

                getch();
                cout<<Obj.Base::B_ID<<endl;

                Obj.Accept();

                Obj.Display(7);

                Obj.Base::Display(5);

                getch();
                return 0;
}
