#include <iostream>
using namespace std;

main(){
    int i,j,n,suku=1;
    cout << "Input : "; cin >> n;
    cout << suku << " ";
    for(i=2; i<=n; i++){
        if (i % 2 == 0){
            suku += 5;
        }
        else
        {
            suku +=3;
        }

        cout << suku << " ";
    }
}