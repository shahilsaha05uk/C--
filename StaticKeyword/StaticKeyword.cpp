#include <iostream>
using namespace std;

//Static Variables 
//1. Are the ones which can be declared inside a class but can only be modified outside the class 

class Base
{
public:
    static int a;

    int getA()
    {
        a++;
        return a;
    }

    static int getB()
    {
        static int b=10;
        return a + b;
    }
};

int Base::a;

int main()
{
    Base b1, b2, b4;
    Base* b3 = new Base();

    //Variables
    int a = b1.getA();
    cout << "Value of A: " << a << endl;
    cout << "Value of A: " << b2.getA() << endl;
    cout << "Value of A: " << b3->getA() << endl;

    //Base::a = 20;
    //cout << "Value of A: " << b2.getA() << endl;
    
    //Functions
    b2.getA();
    cout << "Value of A: " << b3->getB() << endl;
    b2.getA();
    cout << "Value of A: " << b4.getB() << endl;


}
