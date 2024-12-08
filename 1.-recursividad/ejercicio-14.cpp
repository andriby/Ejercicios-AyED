#include <iostream>

using namespace std;

bool busquedaBinaria(int arr[], int izquierda, int derecha, int e){
    int medio = izquierda + (derecha - izquierda) / 2;
    
    if (arr[medio] == e) {
        return true;
    } else if (arr[medio] > e) {
        return busquedaBinaria(arr, izquierda, medio - 1, e);
    } else {
        return busquedaBinaria(arr, medio + 1, derecha, e);
    }
    return false;

}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << busquedaBinaria(arr, 0, 9, 9);
}