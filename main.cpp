#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, max;
    cout << "inserisci primo numero" << endl;
    cin >> num1;
    cout << "inserisci secondo numero" << endl;
    cin >> num2;
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    cout << "il numero più grande è " << max << endl;
    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
