#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
        public:
                int a,b;

                Base()
                {       a = b = i = j = k = l = 0;

                        cout<<"\n Base :: Constructor"<<endl;
                }
                ~Base()
                {
                        cout<<"\n Base :: Destructor"<<endl;
                }

            private:
                        int i , j;
            protected:
                        int k, l;
};
class Derived : public Base
{
        public:
                int x;

                Derived()
                {
                        x = y = z = 0;

                        Base :: a = 30;
                        Base :: b = 40;

                       /// Base :: i = 20;   Because private cant acceced by outsider of class
                        ///Base :: j = 10;

                        Base :: k = 20;
                        Base :: l = 50;

                        cout<<"\n Derived :: Constructor"<<endl;
                }
                ~Derived()
                {
                        cout<<"\n Derived :: Destructor"<<endl;
                }
                private:
                        int y;

                protected:
                            int z;

};

int main()
{
        Derived dobj;

        dobj.a = 40;
        dobj.b = 30;

        //dobj.k = 34; not allowed bez private
        //dobj.l = 20;

        //dobj.i = 21;
        //dobj.j = 32;

        dobj.x = 5;

        cout<<"\n Values"<<dobj.a<<dobj.b<<dobj.x<<endl;

        cout<<"\n Size of Given object"<<sizeof(dobj);

        getch();
        return 0;

}

