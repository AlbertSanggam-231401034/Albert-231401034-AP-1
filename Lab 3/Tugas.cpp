#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    float TB, BB, Hasil;

    system("cls");
    cout<<"Masukan Berat Badan Anda (dalam kg): "<<endl;
    cin>>BB;
    cout<<"Masukan Tinggi Badan Anda (dalam M): "<<endl;
    cin>>TB;
    
    Hasil = BB / (TB * TB); 
    cout << "BMI Anda :" << fixed << setprecision (2) << Hasil <<endl;
    if (Hasil < 18.5) 
    {
        cout<<"Kamu Underweight / Berat Badan Kurang"<< endl;
    } 
    else if (Hasil <= 18.5 <=Hasil< 25) 
    {
        cout<<"Berat Badan Kamu Normal"<<endl;
    }  else if (Hasil >= 25.1 <=Hasil<30) 
    {
        cout<<"Berat Badan Kamu Berlebih"<<endl;
    } 
    else 
    {
        cout<<"Kamu Obesitas"<<endl;
    }

    
}