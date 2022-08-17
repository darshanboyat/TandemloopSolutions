#include <bits/stdc++.h>
using namespace std;

class Calculator{
    private:
        double a;
        double b;
    public:
        double ans;

    Calculator(double a, double b){
        this->a = a;
        this->b = b;
    }
    // Member Functions
    double addition();
    double subtraction();
    double multiplication();
    double division ();
};
double Calculator::addition()
{
    return a + b;
}
double Calculator::subtraction()
{
    return a - b;
}
double Calculator::multiplication()
{
       return a * b; 
}
double Calculator::division ()
{
        if(b == 0)
        {
            cout << "Denominator can not be zero!!" << flush << endl;
            return 0;
        }
        return a / b;    
}
int32_t main(void)
{
    double a, b;
    int choice;

    cout << "\nEnter two numbers :- " << flush;
    cin >> a >> b;

    Calculator calc(a, b);

    top:
    cout << "\n\t\t\t**********ENTER YOUR CHOICE**********" << endl;
    cout << "Press 1 for Addition." << endl;
    cout << "Press 2 for Subtraction." << endl;
    cout << "Press 3 for Multiplication." << endl;
    cout << "Press 4 for Division." << endl;
    cout << "ENTER YOUR CHOICE HERE :- " << flush;
    cin >> choice;


    switch(choice)
    {
        case 1:
            cout << "Addition of the given numbers :- "  << calc.addition() << endl;
            break;
        case 2:
            cout << "Subtraction of the given numbers :- "  << calc.subtraction() << endl;
            break;
        case 3:
            cout << "Multiplication of the given numbers :- "  << calc.multiplication() << endl;
            break;
        case 4:
            cout << "Division of the given numbers :- "  << calc.division() << endl;
            break;
        default:
            cout << "\nInvalid choice!!!" << endl;
            goto top;
    }
    return 0;
}