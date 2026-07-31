#include<iostream>
#include<conio.h>
 using namespace std;

 class Base
 {
        public:
                int a,b;

                Base()
                {
                        a = b = i = j = k = l = 0;
                        cout<<"\n Base :: constructor"<<endl;
                }
                ~Base()
                {
                        cout<<"\n Base :: Destructor"<<endl;
                }

       private :
                                int  i, j;

        protected :
                                int  k, l;
};
 class Derived : protected Base
 {
        public:
                int x;

                Derived()
                {
                        x = y = z = 0;
                        cout<<"\n Derived :: constructor"<<endl;

                        Base :: a = 40;
                        Base :: b = 31;
                       // Base :: i = 22;
                        //Base :: j = 44;
                        Base :: k = 90;
                        Base :: l = 81;

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

        dobj.x = 45;

        cout<<"\n value"<<dobj.x<<endl;
        cout<<"\n size of given value"<<sizeof(dobj)<<endl;

        getch();
        return 0;
 }
