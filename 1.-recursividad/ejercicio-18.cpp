#include <iostream>
using namespace std;

bool esImpar(int n);

bool esPar(int n){
    if(n == 0){
        return true;
    }else{
        return esImpar(n - 1);
    }
}

bool esImpar(int n){
    if(n == 0){
        return false;
    }else{
        return esPar(n - 1);
    }
}

int main(){
    int n = 5;

    cout << esImpar(n);
}