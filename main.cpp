#include <iostream>
using namespace std;

int main ()
{
    double dochod,podatek;
    double kwotaZmniejszajacaPodatek = 556.02, progPodatkowy = 85528, podatekBazowyDlaDrugiegoProgu = 14839.02;
    double stawka1 = 0.18, stawka2 = 0.32;

    cout << "Dochod? ";
    cin >> dochod;

    if( dochod < progPodatkowy ) {
        podatek = stawka1 * dochod - kwotaZmniejszajacaPodatek;
        if( podatek < 0 )
            podatek = 0;
    } 
    else {
         podatek = podatekBazowyDlaDrugiegoProgu + stawka2 * (dochod-progPodatkowy);
    }

    cout << "Twoj podatek wynosi: " << podatek << "zł\n";

    cin.ignore();
    cin.get();

    return 0;
}
