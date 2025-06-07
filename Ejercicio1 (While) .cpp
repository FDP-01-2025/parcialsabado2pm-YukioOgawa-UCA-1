// Yukio Alberto Ogawa Urquilla - 00171625

#include <iostream>
using namespace std;

int main()
{
    int numeroIngresado, numeroSecreto = 40;

    cout << "Ingrese un numero entre el 1 al 100" << endl;
    cin >> numeroIngresado;

    // Evaluo si el numero no sale de los parametros.

    if (numeroIngresado < 0 || numeroIngresado > 100)
    {
        cout << "Parametros incorrectos" << endl;
    }
    else
    {

        // Realizo el procedimiento del while mientras no adivine.

        while (numeroIngresado != numeroSecreto)
        {
            if (numeroIngresado < numeroSecreto)
            {
                cout << "El numero ingresado es muy pequenio" << endl;
            }
            else if (numeroIngresado > numeroSecreto)
            {
                cout << "El numero ingresado es muy grande" << endl;
            }

            cout << "Animo, vuelve a intentarlo" << endl;
            cin >> numeroIngresado;
        }

        // Cuando el usuario adivine, saldra un mensaje de felicitacion

        cout << "Felicidades, has adivinado el numero" << endl;
    }

    return 0;
}