#include <iostream>

using namespace std;

int main(){
    system("cls");
    a:
        cout<<"Hello World"<<endl;
        goto d;
    b:
        cout<<"Universitas Sumatera Utara"<<endl;
        return 0;
    c:
        cout<<"Fasilkom-Ti"<<endl;
        goto b;
    d:
        cout<<"Ilmu Komputer"<<endl;
        goto c;
}