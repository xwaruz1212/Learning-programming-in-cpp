#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>


using namespace std;

int losowane [4], zgadywane [4], liczba_trafien;

bool jeden = false;

int main()
{
    int (liczba_trafien = 0);
    srand(time(NULL));

    cout << "Witaj w MiniKasynie! Podaj 4 liczby w zakresie 0-1:" << endl;

    for(int i=0; i<4; i++)
    {
        cout<< "Podaj "  << i+1 <<  " liczbe: \n";
        cin>> zgadywane [i];

        if(zgadywane[i]!=0 && zgadywane[i]!=1)
        {
            cout<< "Przedzial musi byc od 0-1! Sprobuj ponownie! \n";
            cin>> zgadywane[i];
        }


    }

    cout<< "Za 3 sekundy wylosuje 4 liczby ktore beda wygrywajace "<< endl;
    Sleep(3000);
    for (int i=0; i<4; i++)
    {
        if(jeden)
        {
            losowane[i] = zgadywane[i];
        }
        else
        {
            losowane[i] = !zgadywane[i];
        }

        cout<< losowane[i]<< endl;

        if (zgadywane[i] == losowane[i])
        {
            liczba_trafien = liczba_trafien+1;
        }
    }

    cout<<"trafiles "<< liczba_trafien<< " razy"<< endl;


    return 0;
}
