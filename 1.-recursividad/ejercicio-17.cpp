#include <iostream>
using namespace std;

int multiplicar(int a, int b, int c = 0){
    if(b == 0){
        return c;
    }else{
        return multiplicar(a, b - 1, a + c);
    }
}

int main(){
    int a, b;
    cout << "Ingrese numero 1" << endl;
    cin >> a;
    cout << "Ingrese numero 2" << endl;
    cin >> b;

    cout << multiplicar(a,b);
    return 0;
}