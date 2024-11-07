#include <iostream>
using namespace std;

bool esCapicua(string cadena, int i, string aux = ""){
    aux += cadena[i];
    if(cadena == aux){
        return true;
    }else if(i == 0){
        return false;
    }
    return esCapicua(cadena, i - 1, aux);
}

int main(){
    string cadena = "";
    int i = 0;
    cin >> cadena;
    cout << endl;
    cin >> i;
    cout << endl;
    cout << esCapicua(cadena, i - 1);
    
    return 0;
}