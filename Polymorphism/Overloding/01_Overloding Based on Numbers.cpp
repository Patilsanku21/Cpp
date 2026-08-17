#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
        public:
        int N1,N2,Sum;
        float N3;

        Base();
        void Add(int N1,int N2);
        void Add(int N1,int N2,int N3);

        ~Base();
};
Base :: Base()
{
            N1 = 30;
            N2 = 40;
            N3 = 70;
            Sum = 0;
}
void Base :: Add(int N1,int N2)
{
            Sum = N1 + N2;
}
void Base :: Add(int N1,int N2,int N3)
{
            Sum = N1+ N2 + N3;
}
Base :: ~Base()
{
        cout<<"Sum"<<Sum<<endl;
}
int main()
{
        Base bobj;

        bobj.Add(30,40);

        cout<<"\n Addition Of Two Numbers "<<bobj.Sum<<endl;

        bobj.Add(60,20,45);

        cout<<"\n Addition Of Two Numbers"<<bobj.Sum<<endl;

        getch();

        return 0;
}
