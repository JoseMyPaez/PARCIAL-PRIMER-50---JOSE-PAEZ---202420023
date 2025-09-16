#include <iostream>

using namespace std;

void package(int n) {
    cout << "Paquetes revisados: ";
    
    if (n % 2 == 0) { 
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
}

int main() {
    int numberOfPackages;
    
    cout << "Ingrese la cantidad de paquetes: ";
    cin >> numberOfPackages;
    
    package(numberOfPackages);
    
    return 0;
}