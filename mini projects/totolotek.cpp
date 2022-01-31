#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>


using namespace std;

int losowane [4], zgadywane [4], liczba_trafien;




int main()
{
    int (liczba_trafien = 0);
    srand(time(NULL));

    cout << "Witaj w totolotku! Wpisz 4 liczby od 1-99: \a" << endl;

    for(int i=0; i<4; i++)
    {
        cout<< " Podaj "  << i+1 <<  " liczbe : \n";
        cin>> zgadywane [i];
    }




    cout<< "Za 3 sekundy wylosuje 4 liczby ktore beda wygrywajace "<< endl;
    Sleep(3000);
    for (int i=0; i<4; i++)
    {
        losowane [i]=rand()%100+1;
        cout<< losowane[i]<< endl;

        if (zgadywane[i] == losowane[i])
        {
            liczba_trafien = liczba_trafien+1;
        }
    }

    cout<<"trafiles "<< liczba_trafien<< " razy"<< endl;


    return 0;
}
