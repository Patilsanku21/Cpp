#include<iostream>
using namespace std;

class Base
{
        public:
                Base()
                {
                        cout<<"\n Base :: constructor"<<endl;
                }
                ~Base()
                {
                        cout<<"\n Base :: Destructor"<<endl;
                }
                protected:
                            int a,b;
                void Fun()
                {
                        cout<<"\n Base :: Fun"<<endl;
                }
};
class Derived1 :public Base
{
            public:
                    int x,y;

                    Derived1()
                    {
                            cout<<"\n Derived1:: constructor"<<endl;
                    }
                    ~Derived1()
                    {
                            cout<<"\n Derived1 :: Destructor"<<endl;
                    }
                    void Fun()
                    {
                            cout<<"\n Derived1 :: Fun"<<endl;
                    }
};
class Derived2 : public Derived1
{
        public:
                int x,y;

                Derived2()
                {
                        cout<<"\n Derived2 :: constructor"<<endl;
                }
                ~Derived2()
                {
                        cout<<"\n Derived2 :: Destructor"<<endl;
                }
                void gun()
                {
                        cout<<"\n Derived2 :: gun"<<endl;
                }
};
int main()
{
        Derived2 dobj2;

        cout<<"\n size of given object"<<sizeof(dobj2)<<endl;

        dobj2.gun();


        return 0;

}
