#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a,i;
    float ergebnis, obergrenze;
    cout << "Bitte geben Sie eine Obergrenze für die zu einzugebenen Zahlen ein" << endl;
    cin >> obergrenze;
    cout << "Bitte geben Sie "<< obergrenze <<" Zahlen ein" << endl;
    ergebnis = 0;
    for (i=1; i<=obergrenze; i++){
        cout << "Die " << i << ". Zahl: ";
        cin >> a;
        if (a<0 || a>=1000){
            i = i-1;
            cout << "Angegebene Zahl liegt nicht im Bereich -> Eingabe beendet" << endl;
            break;
        }
        ergebnis = ergebnis + a;
    }
    cout << i << endl;
    ergebnis = ergebnis/i;
    cout << "Der Durchschnitt von den Zahlen ist " << ergebnis << endl;
}
