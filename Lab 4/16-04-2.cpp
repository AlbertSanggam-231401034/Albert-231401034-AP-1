#include <iostream>

using namespace std;
int main(){
    int i = 1;
    genap:
        if (i % 2 == 0){
            cout << i <<" ";
        }
        i++;
    if (i<= 10){
        goto genap;
    }
}