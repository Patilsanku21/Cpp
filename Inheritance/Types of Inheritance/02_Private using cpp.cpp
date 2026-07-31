#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
public:

        int a,b;

        Base()
        {          a = b = i = j = k = l = 0;

                cout<<"\n Base :: constructor"<<endl;
        }
        ~Base()
        {
                cout<<"\n Base ::Destructor"<<endl;
        }
        private:
                int i , j;

        protected:
                int k , l;
};
class Derived : private Base
{
        public:
                int x ;

                Derived()
                {
                        x = y = z  = 0;

                        cout<<"\n Derived :: Constructor"<<endl;

                        Base :: a = 21;
                        Base :: b = 31;

                        // Base :: i = 30; not allowed because private
                        //Base :: j = 20;

                        Base :: k = 40;
                        Base :: l = 41;


                }
                ~Derived()
                {
                        cout<<"\n Derived :: Destructor"<<endl;
                }
        private:
                   int  y;

        protected:
                        int z;

};
int main()
{

    Derived dobj;

    dobj.x = 45;

    cout<<"\n value "<<dobj.x<<endl;

    cout<<"\n Size of Given object"<<sizeof(dobj)<<endl;

    getch();
    return 0;
}
