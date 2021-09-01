#include <iostream>
#include "Fraccion.h"
using namespace std;

int main() 
{
  cout << "\n     Definición de fracciones iniciales: " << endl;
  Fraccion fraccion1 = Fraccion(3,4);
  Fraccion fraccion2 = Fraccion(1,2);

	cout << "\nPrimer fracción: " << fraccion1 << " Segunda fracción: " << fraccion2 << endl;

  cout << "\n     Sección operadores aritméticos: " << endl;

	Fraccion suma = fraccion1 + fraccion2;
	cout << "\n- La suma de la fracción 1 + la fracción 2 es: " << suma << endl;

	Fraccion resta = fraccion1 - fraccion2;
	cout << "- La resta de la fracción 1 - la fracción 2 es: " << resta << endl;

	Fraccion sumaIgual = fraccion1 += fraccion2;
	cout << "\n- La suma del valor de la fracción 1 + la fracción 2 es, y actualiza la fración 1 a: " << sumaIgual << endl;
	cout << "Reset de fraccion 1 de: " << fraccion1;
	fraccion1 = Fraccion(3,4);
	cout << " a: " << fraccion1 << endl;

	Fraccion restaIgual = fraccion1 -= fraccion2;
	cout << "- La resta del valor de la fracción 1 - la fracción 2 es, y actualiza la fración 1 a: " << restaIgual << endl;
	cout << "Reset de fraccion 1 de: " << fraccion1;
	fraccion1 = Fraccion(3,4);
	cout << " a: " << fraccion1 << endl;

	Fraccion multiplicacion = fraccion1 * fraccion2;
	cout << "- La multiplicación de la fracción 1 * la fracción 2 es: " << multiplicacion << endl;

	Fraccion division = fraccion1 / fraccion2;
	cout << "- La división de la fracción 1 / la fracción 2 es: " << division << endl;

	Fraccion multiplicacionIgual = fraccion1 *= fraccion2;
	cout << "- La multiplicación de la fracción 1 * la fracción 2 es, y actualiza la fracción 1 a: " << multiplicacionIgual << endl;
	cout << "Reset de fraccion 1 de: " << fraccion1;
	fraccion1 = Fraccion(3,4);
	cout << " a: " << fraccion1 << endl;

	Fraccion divisionIgual = fraccion1 /= fraccion2;
	cout << "- La división de la fracción 1 / la fracción 2 es, y actualiza la fracción 1 a: " << divisionIgual << endl;
	cout << "Reset de fraccion 1 de: " << fraccion1;
	fraccion1 = Fraccion(3,4);
	cout << " a: " << fraccion1 << endl;

  cout << "\n     Sección operadores booleanos: " << endl;
	if (fraccion1 > fraccion2)
	{
    cout << "\n+ Primer fracción es mayor que segunda fracción" << endl;
	}
	else
	{
    cout << "+ Segunda fracción no es mayor que primer fracción" << endl;
	}

	if (fraccion1 < fraccion2)
	{
    cout << "+ Primer fracción es mayor que segunda fracción" << endl;
	}
	else
	{
    cout << "+ Segunda fracción no es mayor que primer fracción" << endl;
	}

	if (fraccion1 >= fraccion2)
	{
    cout << "+ Primer fracción es mayor o igual que segunda fracción" << endl;
	}
	else
	{
    cout << "+ Segunda fracción no es mayor o igual que primer fracción" << endl;
	}

	if (fraccion1 <= fraccion2)
	{
    cout << "+ Primer fracción es mayor o igual que segunda fracción" << endl;
	}
	else
	{
    cout << "+ Segunda fracción no es mayor o igual que primer fracción" << endl;
	}

	Fraccion fraccionIgual1 = Fraccion(5,10);
	Fraccion fraccionIgual2 = Fraccion(5,10);

	cout << "\nFracciones para igual a y desigual a: " << endl;
	cout << "Primer fracción: " << fraccionIgual1 << " Segunda fracción: " << fraccionIgual2 << endl << endl;

	if (fraccionIgual1 == fraccionIgual2)
	{
    cout << "+ Las fracciones son iguales" << endl;
	}
	else
	{
    cout << "+ Las fracciones no son iguales" << endl;
	}

	if (fraccion1 != fraccion2)
	{
    cout << "+ Las fracciones no son iguales" << endl;
	}
	else
	{
    cout << "+ Las fracciones son iguales" << endl;
	}

  cout << "\n     Sección operadores unarios: " << endl;

	++fraccion1;
	cout << "\n* El incremento en 1 de la fracción 1 es: " << fraccion1 << endl;

	--fraccion2;
	cout << "* El decremento en 1 de la fracción 2 es: " << fraccion2 << endl;
}