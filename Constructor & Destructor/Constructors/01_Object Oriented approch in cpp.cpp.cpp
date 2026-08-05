using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Base
{
		public :
				int No1;

				Base()
				{
						No1 = No2 = Ans = 0;

						Process();

						cout<<"\n Inside  Constructor!!! " << No1 << " " << No2 << " " << Ans << endl;
				}

				Base( int N1, int N2 )
				{
						No1 = N1;
						No2 = N2;
						Ans = 0;

						Process();

						cout<<"\n Inside Constructor!!! "<< No1 << " " << No2 << " " << Ans << endl;
				}

				~Base()
				{
						cout<<"\n Inside Destructor!!! "<< No1 << " " << No2 << " " << Ans;
				}

                void Accept()
                {
                        cout << "\n Enter First Number : ";
                        cin >> No1;

                        cout << "\n Enter Second Number : ";
                        cin >> No2;

                        Process();
                }

                void Display()
                {
                        cout << "\n 1st Num = " << No1 << "\n 2nd Num = " << No2 << "\n Result = " << Ans << "." << endl;
                }

        private :
                int No2;

                void Process()
                {
                    cout << "\n Inside Private Process Function \n";
                    Ans = (No1 + No2) * 10;
                }

        protected :
                int Ans;
};

int main()
{
				Base Obj1;

				Base Obj2(50, 70);

                getch();

				Obj1.Accept();

				Obj1.Display();

				getch();

				Obj2.Display();

                Obj2.No1 = 25;

                getch();
                return 0;

}
