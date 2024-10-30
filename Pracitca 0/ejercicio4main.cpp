#include "ejercicio4visita.h"
#include <iostream>
int Visitas; // Definición de la variable Visitas en el main

int main(int argc, char* argv[]) {
    using namespace std;
    Visitas = 0;
    while (*++argv)
        visita(*argv);
    cout << "Visitas: " << Visitas << endl;
    return 0;
}