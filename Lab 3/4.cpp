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

    // if (nilai <= 65){
    //     cout<<"Anda TIDAK Lulus"<<endl;
    // } else {
    //     if (nilai == 100){
    //         cout << "Anda Lulus Dan Anda Hebat" << endl;
    //     } else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    switch (nilai) {
    //     case 1 :
    //         cout << "Senin" << endl;
    //         break;
    //     case 2 :
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3 :
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4 :
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5 :
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6 :
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7 :
    //         cout << "Minggu" << endl;
    //         break;  
        
    //     default :
    //     cout << "Inputan TIDAK Valid " << endl;
    //     break ;
    // }

    case 85 ...100:
    cout<< "A" << endl;
        break;
    case 80 ... 84:
    cout << "B+" << endl;
        break;
    case 75 ... 79:
    cout << "B" << endl;
        break;
    case 70 ... 74:
    cout << "C+" << endl;
        break;
    case 65 ... 69:
    cout <<"C" << endl;
        break;
    case 60 ... 64:
    cout <<"D+" << endl;
        break;
    case 50 ... 59:
    cout <<"D" << endl;
    break;

    default :
    cout << "E" << endl;
    break;
    }
}