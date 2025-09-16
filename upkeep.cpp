#include <iostream>

using namespace std;

bool upkeep (int sheets, int interval) {
    if (sheets % interval == 0 ){ 
        return true;
    } else {
        return false;
    }
}

int main() {
    int sheets, interval;
    cout << "Ingrese la cantidad de hojas: ";
    cin >> sheets;
    cout << "Ingrese el intervalos de mantenimiento: ";
    cin >> interval;

    if(upkeep(sheets, interval)) {
        cout << "La maquina requiere mantenimiento" << endl;
    } else {
        cout << "La maquina no requiere mantenimiento" << endl;
    }
    
    return 0;
}