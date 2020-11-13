#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>

using namespace std;

string przycisk;


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
        cout <<"nie mozna dzielic przez 0" << endl;
        return 0;
    }
    return a/b;
}



double kalkulator(double a,double b,int menu)
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
      cout  << " 1) dodawanie\n"
            << " 2) odejmowanie\n"
            << " 3) mnozenie\n"
            << " 4) dzielenie\n"
            << " 5) potegowanie\n"
            << " 6) logarytm \n"
            << " 7) pierwiastkowanie\n" << endl;
       cout << "wybierz operacje:\n";
       cin >> menu;

        if (menu!=6)
        {
        cout << "podaj dwie liczby: \n";
        cin >> a >> b;
        cout << kalkulator(a, b, menu) << endl;
        }
        else if (menu==6)
{       cout << "podaj jedna liczbe:";
        cin >> a;
        cout << kalkulator(a,b,menu) << endl;


        cout << "Jesli chcesz kontynuowac wcisnij dowolny przycisk, a jesli wyjsc wcisnij y \n";
        cin >> przycisk;
        if (przycisk=="y")
            w = false;

    }



    // zadanie  domowe
    /*
    a) przerob kod, tak aby w pierwszej kolejnosci nalezalo wybrac operacje, a nastepnie podawalo liczby.
    b) W przypadku podawania logarytmu lub pierwiastkowania ma byc podana jedna liczba !
    c) Zamien typ liczb na double zeby obliczenia byly bardziej precyzyjne.
    d*) zaloz konto na serwisie github i sprawdz czy masz git na laptopie, jesli nie to zainstaluj (uwaga git!= github!!) */
}}


