// ¿Qué problema hay con el siguiente programa?
#include <iostream>
int main()
{
using namespace std;
cout << SOS() << endl;
}
const char* SOS() { return "... ___ ..."; }
// Comente, al menos, dos posibles soluciones.
// No se ha declarado la función SOS antes de ser llamada
// 1. Declarar la función antes de ser declarada
// 2. eliminar la función y hacer el cout directamente