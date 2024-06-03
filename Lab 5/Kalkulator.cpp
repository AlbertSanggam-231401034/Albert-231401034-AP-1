#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b,op;
    float c;
    char d;
    do{
    cout<<"=================================="<<endl;
    cout<<"Selamat Datang di Program Kalkulator"<<endl;
    cout<<"1. Tambah"<<endl;
    cout<<"2. Kurang"<<endl;
    cout<<"3. Kali"<<endl;
    cout<<"4. Bagi"<<endl;
    cout<<"5. Modulo"<<endl;
    cout<<"=================================="<<endl;
    cout<<"Masukan Operasi: ";
    cin>>op;
    cout<<"Masukan Angka Pertama: ";
    cin>>a;
    cout<<"Masukan Angka Kedua: ";
    cin>>b;
    if (op==1)
    {
        c=a+b;
    }
    else if (op==2)
    {
        c=a-b;
    }
     else if (op==3)
    {
        c=a*b;
    }
     else if (op==4)
    {
        c=a/b;
    }
     else if (op==5)
    {
        c=a%b;
    }
    cout<<""<<endl;
    cout<<"Hasil a operasi b= "<<c<<endl;
    cout<<"Apakah Anda Ingin Melanjutkan? [Y/N]"<<endl;
    cin>>d;
    system("cls");
    }while(d=='Y'||d=='y');
    return 0;
}