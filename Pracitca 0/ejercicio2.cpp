// Considere la siguiente función:
#include <iostream>
void muestra_temperatura(int temperatura)
{
    using namespace std;
    cout << "Temperatura: " << temperatura << " grados ";
    //if (20 < temperatura < 30) //siempre entrará en el if pues cualquier número es mayor a 20 o menor a 30 (20 < temperatura)<30 = (0 ó 1) <30
    if (20 < temperatura && temperatura < 30) //correctamente
        cout << "(normal)";
    else
        cout << "(anormal)";
    cout << endl;
}
// Explique el resultado de las siguientes llamadas a la función:
// 1
// muestra_temperatura(10);
// muestra_temperatura(27);
// muestra_temperatura(40);

int main()
{
    muestra_temperatura(10);
    muestra_temperatura(27);
    muestra_temperatura(40);
    return 0;
}