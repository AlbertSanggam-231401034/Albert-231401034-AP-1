#include <iostream>
using namespace std;

int main() {
    char choice;
    double num1, num2, result;
    bool continueCalculation = true;

    while (continueCalculation) {

        cout << "====================================" << endl;
        cout << "Selamat Datang di Program Kalkulator" << endl;
        cout << "====================================" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "5. Modulo" << endl;
        cout << "====================================" << endl;

        cout << "Masukkan operasi (1-5): ";
        cin >> choice;

        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        switch(choice) {
            case '1':
                result = num1 + num2;
                cout << "Hasil " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '2':
                result = num1 - num2;
                cout << "Hasil " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '3':
                result = num1 * num2;
                cout << "Hasil " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '4':
                if (num2 == 0) {
                    cout << "Error! Pembagian dengan nol." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Hasil " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            case '5':
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "Hasil " << num1 << " % " << num2 << " = " << result << endl;
                break;
            default:
                cout << "Error! Pilihan tidak valid." << endl;
        }

        char cont;
        cout << "Apakah Anda ingin melanjutkan? [Y/N]: ";
        cin >> cont;
        if (cont != 'Y' && cont != 'y') {
            continueCalculation = false;
        }
    }

    return 0;
}