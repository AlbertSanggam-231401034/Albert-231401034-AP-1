// Library C++
#include <iostream> 

using namespace std;

int main()
{
    int a,b;  //Deklarasi Variabel
    system("cls"); //Hapus Layar

    a=3;
    b=5;

    //# Kalkulator.
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // float bagi = (float) a/ (float) b ;
    // int modulo = a % b;

    // cout<<"Hasil Penjuumlahan = "<< tambah << endl;
    // cout<<"Hasil Pengurangan = "<< kurang << endl;
    // cout<<"Hasil Perkalian = "<< kali << endl;
    // cout<<" Hasil Pembagian = "<< bagi << endl;
    // cout<<" Hasil sisa bagi = " << modulo << endl;

    //# Operator relasional {Pembadingan 2 Nilai}
    // cout << ( a == b) << endl;
    // cout << ( a > b) << endl;
    // cout << ( a >= b) << endl;
    // cout << ( a < b) << endl;
    // cout << ( a <= b) << endl;
    // cout << ( a != b) << endl;

    // Operator logika {Pengecekan Kondisi Logika, dan,atau,negasi,Biasanya Mengecek True or False.}
    // cout << (true && true) << endl;
    // cout<<(true&& false)<< endl;
    // cout<<(false&& true)<< endl;
    // cout<<(false&& false)<<"\n"<< endl;
    
    // cout<<(true||true)<< endl;
    // cout<<(true||false)<< endl;
    // cout<<(false||true)<< endl;
    // cout<<(false||false)<<"\n"<< endl;

    // cout<<!true<< endl;
    // cout<<!false<< "\n"<< endl;

    // Operator bitwise {andBitwie,Xor,Shift Kiri,dll.}
    // cout<<(5 & 7)<< endl;
    // cout<< (5 | 7)<< endl;
    // cout<< (5^7)<< endl;
    // cout<< (~7)<< endl;
    // cout<< (7 << 2)<< endl;
    // cout<< (7>> 2)<< endl;

    // Operator assignment {menginisialisasi atau memperbarui nilai dari sebuah variabel}
    // {= (assignment), += (penambahan dan assignment), -= (pengurangan dan assignment), *= (perkalian dan assignment), /= (pembagian dan assignment)}
    // a += 7;
    // cout<<a<< endl;

    // a -= 7;
    // cout<<a<< endl;

    // a *= 7;
    // cout<<a<<endl;

    // a /= 7;
    // cout<<a<<"\n"<<endl;

    // Operator increment dan decrement{Menambah atau mengurangi Nilai Variabel }
    //{++ (increment) dan -- (decrement). }
    // ++a;
    // cout<<a<<endl;

    // ++b;
    // cout<<a<<endl;


    // a++;
    // cout<<a<<endl;

    // b++;
    // cout<<b<<endl;
    


    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;


    cout<< a++ << endl;
    cout << a << endl;

    cout << b++ << endl;
    cout << b << "\n"<<endl;


    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << --b << endl;

    cout << a-- << endl;
    cout << a << endl;

    cout << b-- << endl;
    cout << b << endl;

}