#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int age;
char sex;


int main()
{
    cout << "\t \t \t \t \t \t Witaj w Westeros :)\n Podaj swoja plec (m = male, f = female):" << endl;
    cin >> sex;


    cout << "Dobrze... Teraz podaj swoj wiek: \n";
    cin >> age;


/*
    if ((age>=15 && sex=='f') || (age>=18 && sex=='m'))
    cout << "Mozesz uprawiac seks w Westeros!";

    else if ((age<15 && sex=='f') || (age<18 && sex=='m'))
    cout << "Jestes nieletni/a";
*/

    ((age>=15 && sex=='f') || (age>=18 && sex=='m')) ? cout << "Mozesz uprawiac seks w Westeros!" : cout << "Nie mozesz jeszcze uprawiac seksu. Brakuje Ci:"; ((sex=='f') ? cout << 15-age : cout << 18-age);


    return 0;
}
