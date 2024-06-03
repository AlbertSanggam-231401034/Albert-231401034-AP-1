#include <iostream>
using namespace std;

int main() {
    string kalimat = "I ENIL SIHTHSIREBBIG S";
    string kalimatTerbalik = "";

    // Membalikkan string
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        kalimatTerbalik += kalimat[i];
    }

    cout << "Kalimat asli: " << kalimat << endl;
    cout << "Kalimat terbalik: " << kalimatTerbalik << endl;

    return 0;
}
