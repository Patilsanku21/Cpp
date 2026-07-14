#include<iostream>
#include<conio.h>
#define pi 3.14;
using namespace std;

class Circle
{
        private :
                     float Rad;

        public   :

                float Area,Circum;

                Circle();

                Circle(float);

                Circle(Circle &);

                ~Circle();

                void Accept_Radius();

                void Area_Of_Circle();

                void Circumference_Of_Circle();

};

int main()
{
        Circle Obj1;

        Circle obj2(7.5);

        obj1.Accept_Radius();
        obj1.Area_Of_Circle();
        obj1.Circumference_Of_Circle();

        getch();

        obj2.Area_Of_Circle();
        obj2.Circumference_Of_Circle();

        getch();

        obj3.Accept_Radius();

        cout<< "\n Area Of Circle "<<obj3.Area;
        cout<< "\n Circumference Of Circle "<< obj3.Circum;

        getch();

        return 0;

}

void Calc
{
        Circle.obj;
        obj.Accept_Radius();
}
Circle :: Circle()
{
            Rad = Area = Circum = 0.0;

            cout<< "\n Inside Default Constructor :";

}
Circle :: Circle(float R)
{
        Rad = R;

        Area = Circum = 0.0;

        cout<<"\n Inside Parametrized Counstructor :";

}
Circle :: Circle(Circle &Ref)
{
        this -> Rad = Ref.Rad;
        this -> Area = Ref.Area;
        this -> Circum = Ref. Circum;

        cout<<"\n Inside Copy Constructor :";


}
Circle :: ~Circle()
{
        cout<<"\n Inside Destructor :";

}
void Circle :: Accept_Radius()
{
        cout<<"\n Enter a Radius :";
        cin >> this -> Rad;

}
void Circle :: Area_Of_Circle()
{
                Area = Pi * Rad * Rad;

                cout << "\n Area for given Circle Calculated by Function as => " << Area ;
}
void Circle :: Circumference_Of_Circle()
{
                Circum = 2 * Pi * Rad;

                cout << "\n Circumference for given Circle Calculated by Function as => " << this -> Circum ;
}
