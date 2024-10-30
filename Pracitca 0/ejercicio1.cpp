// Considere la siguiente función:
#include <iostream>

// void muestra_temperatura(int temperatura)
// {
//     using namespace std;
//     cout << "Temperatura: " << temperatura << " grados ";
//     if (temperatura > 20)
//         if (temperatura < 30)
//             cout << "(normal)";
//     else
//         cout << "(baja)";
//     cout << endl;
// }
// a) ¿Cuál es el resultado de las siguientes llamadas?
// muestra_temperatura(10);
// muestra_temperatura(27);
// muestra_temperatura(40);
// // b) ¿Cree que coincide con las expectativas del programador? ¿A qué se debe?
// No porque no imprime si es normal o baja cuando son diez grados además dice que 40 grados es baja


//mi fucncion:
void muestra_temperatura_mgr(int temperatura)
{
    using namespace std;
    cout << "Temperatura: " << temperatura << " grados ";
    if (temperatura > 20 && temperatura < 30)
            cout << "(normal)";
    else if (temperatura >= 30)
        cout << "(alta)";
    else
        cout << "(baja)";
    cout << endl;
}

int main()
{
    // muestra_temperatura(10);
    // muestra_temperatura(27);
    // muestra_temperatura(40);
    muestra_temperatura_mgr(10);
    muestra_temperatura_mgr(27);
    muestra_temperatura_mgr(40);
    return 0;
}
