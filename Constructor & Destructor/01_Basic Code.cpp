#include<iostream>
#include<conio.h>
using namespace std;

class Calc
{
        private :
                int N1, N2;

        public :
               int  Sum , Sub;

          Calc()
          {
                N1 = N2 = Sum = Sub = 0;

                cout<<" \n Inside Default Constructor :" <<endl;         //Default Constructor
          }
          Calc(int No1, int No2)
          {
                N1 = No1;
                N2 = No2;
                Sum = Sub;

                cout<<" \n Inside Parametrized Constructor: "<< endl;    //Parametrized Constructor

          }
          Calc(Calc &Ref)
          {
               this -> N1 = Ref.N1;
               this -> N2 = Ref.N2;

               this -> Sum = 0;
                this -> Sub = 0;

            cout<<"\n Inside Copy Constructor :"<<endl;                                            //Copy Constructor

          }
          ~Calc()
          {
                cout<<"\n Inside Destructor :"<<endl;
          }
          void Set_Values()
          {
                cout<<"\n Enter a Two Numbers :"<<endl;
                cin>> N1 >> N2;
          }
          void Addition()
          {
                Sum = N1 + N2;
          }
          void substraction()
          {
                Sub = N1 - N2;
          }
};
int main()
{
             Calc obj1;

             obj1.Set_Values();

             obj1.Addition();

             obj1.substraction();

              cout<<"\n Addtion Of Obj1:"<< obj1.Sum <<endl;
              cout<<"\n Substraction of obj1 :" <<obj1.Sub <<endl;

            Calc obj2(30,32);

            obj2.Addition();

            obj2.substraction();

            cout<<"\n Addtion Of Obj2 :"<< obj2.Sum <<endl;
            cout<<"\n Substraction of obj2 :" <<obj2.Sub <<endl;

                getch();

            Calc obj3(obj2);

            cout<<"\n Addtion Of Obj3"<< obj3.Sum <<endl;
            cout<<"\n Substraction of obj3" <<obj3.Sub <<endl;

            getch();

            obj3.Set_Values();

            cout<<"\n Addition of obj3 "<<obj3.Sum<<endl;
            cout<<"\n substraction of obj3"<<obj3.Sub<<endl;

            obj3.Addition();
            obj3.substraction();

            cout<<"\n Addition  of obj3 "<<obj3.Sum<<endl;
            cout<<"\n substraction of obj3"<<obj3.Sub<<endl;

            getch();
            return 0;




}
