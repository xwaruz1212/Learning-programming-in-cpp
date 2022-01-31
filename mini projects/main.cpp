#include <iostream>
#include <windows.h>
#include <time.h>


using namespace std;

int liczba;

int main()
{
    cout<< "Witaj! Oto 10 losowych liczb z przedzia³u od 1-100: \n";
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        liczba = rand()%100+1;
        Sleep(500);
        cout<< liczba<< endl;
    }
    cout<< "Koniec";

return 0;
}



