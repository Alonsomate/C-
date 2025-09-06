#include <iostream>

using namespace std;

// --- Copia por valor ---
void pagarPorValor(int saldo) {
    saldo -= 50; // intento pagar
    cout << "[porValor] Pagaste 50, saldo dentro = " << saldo << endl;
}

// --- Copia por referencia ---
void pagarPorReferencia(int &saldo) {
    saldo -= 50; // realmente descuenta del original
    cout << "[porReferencia] Pagaste 50, saldo dentro = " << saldo << endl;
}

int main() {
    int saldo1 = 100; // tienes $100 en la tarjeta
    int saldo2 = 100;

    pagarPorValor(saldo1);
    cout << "Saldo real despues de porValor = " << saldo1 << endl << endl;

    pagarPorReferencia(saldo2);
    cout << "Saldo real despues de porReferencia = " << saldo2 << endl;

    return 0;
}
