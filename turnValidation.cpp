#include <iostream>

using namespace std;

void validationAndPrint (int initTurn, int finalTurn) {
    if (initTurn <= finalTurn ){ 
        cout<<"La máquina trabajó en los turnos:";
        int i=initTurn;
        while (i<=finalTurn)
        {
            cout << i << " ";
            i++;
        }
        
    } else {
        cout << " Error: el turno inicial no puede ser mayor que el final." << endl;
    }
}

int main() {
    int initTurn, finalTurn;
    cout << "Ingrese el primer turno: ";
    cin >> initTurn;
    cout << "Ingrese el ultimo turno: ";
    cin >> finalTurn;
    validationAndPrint(initTurn, finalTurn);
    
    return 0;
}