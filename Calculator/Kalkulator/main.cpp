#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>

using namespace std;

string button;


double add(double a, double b)
{
    return a+b;
}


double sub(double a, double b)
{
    return a-b;
}

double mult(double a, double b)
{
    return a*b;
}

double divi(double a, double b)
{
    if(b==0)
    {
        cout <<"Cannot divide by 0" << endl;
        return 0;
    }
    return a/b;
}



double calculator(double a,double b,int menu)
{
    switch(menu)
    {
    case 1:
        return add(a, b);
        break;

    case 2:
        return sub(a, b);
        break;

    case 3:
        return mult(a, b);
        break;

    case 4:
        return divi(a, b);
        break;

    case 5:
        return pow(a, b);
        break;

    case 6:
        return log(a);
        break;
    case 7:
        return sqrt(a);
        break;

    }
}
int main()
{
    bool w = true;
    while(w)
    {
        int menu;
        double a, b;
      cout  << " 1) addition\n"
            << " 2) subtraction\n"
            << " 3) multiplication\n"
            << " 4) division\n"
            << " 5) exponentiation\n"
            << " 6) logarithm \n"
            << " 7) extraction of a root\n" << endl;
       cout << "choose action:\n";
       cin >> menu;

        if (menu!=6)
        {
        cout << "Enter two numbers: \n";
        cin >> a >> b;
        cout << calculator(a, b, menu) << endl;
        }
        else if (menu==6)
{       cout << "Enter one number:";
        cin >> a;
        cout << calculator(a,b,menu) << endl;


        cout << "If you want to continue press any button, if you want to quit press y \n";
        cin >> button;
        if (button=="y")
            w = false;

    }




}}


