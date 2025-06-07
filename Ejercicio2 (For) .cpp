// Yukio Alberto Ogawa Urquilla - 00171625

#include <iostream> 
using namespace std;

int main()
{
    int cantidad;
    cout << "Cuantos numeros primos desea " << endl;
    cin >> cantidad;

    int encontrados = 0;
    int numero = 2;

    /* Con este for puse una condicion, mientras que la cantidad de 
    primos encontrados sea inferior a la que queremos, seguira buscando*/

    for (numero; encontrados < cantidad; numero++)
    {
        int divisor = 0;

        // Con este for se ira probando todos los numeros del 1 hasta el numero en que estemos.

        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                // Si el numero es divisor de i cuenta en los rangos de valores de i.

                divisor++;
            }
        }

        if (divisor == 2)
        {
            // Si el numero solamente tiene 2 divisores, es primo, entonces escribimso.

            cout << numero << " ";
            encontrados++;
        }
    }

    cout << endl;
    return 0;
}