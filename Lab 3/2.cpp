#include <iostream>

using namespace std;

int main ()
{

    system("cls");
    int nilai;
    cout<<"Masukkan Nilai"<<endl;
    cin>>nilai;

    // if (nilai <= 65) {
    //     cout << "Anda Tidak Lulus" << endl;
    // }

    // if (nilai == 100){
    //     cout<< "Anda Hebat" << endl;
    // }
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus" << endl;
    // } else {
    //     cout << "Anda Lulus" << endl;
    // }

    if (nilai <= 65){
        cout<<"Anda TIDAK Lulus"<<endl;
    } else {
        if (nilai == 100){
            cout << "Anda Lulus Dan Anda Hebat" << endl;
        } else {
            cout << "Anda Lulus" << endl;
        }
    }

}