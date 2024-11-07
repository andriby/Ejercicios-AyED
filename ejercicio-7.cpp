#include <iostream>
using namespace std;

void bin2(int n){
    if(n == 0){
        cout << 0;
    }else if(n == 1){
        cout << 1;
    }else{
        bin2(n / 2);
        cout << n % 2;
    }
};

void bin16(int n){
    if(n == 1){
        cout << 1;
    }else{
        bin16(n / 16);
        switch(n % 16){
            case 10:
                cout << 'A';
                break;
            case 11:
                cout << 'B';
                break;
            case 12:
                cout << 'C';
                break;
            case 13:
                cout << 'D';
                break;
            case 14:
                cout << 'E';
                break;
            case 15:
                cout << 'F';
                break;
            default:
                cout << (n % 16);
        }
    }
}

int main(){
    int n = 0;
    cout << "Ingrese un numero ";
    cin >> n;
    cout << "Numero en Base 2:" << endl;
    bin2(n);
    cout << endl;
    cout << "Numero en Base 16:" << endl;
    bin16(n);
    return 0;
}