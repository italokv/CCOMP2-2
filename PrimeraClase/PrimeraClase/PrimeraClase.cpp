#include <iostream>
using namespace std;
/*
int main()
{
	cout << "" << endl;

	cout << "HOLA MUNDO\n";//salto de linea
	cout << "HOLA MUNDO\n";

	cout << "" << endl;

	cout << "HOLA MUNDO\t";//tabulacion 
	cout << "HOLA MUNDO\t";

	cout << "" << endl;

	cout << "HOLA MUNDO\r";//
	cout << "HOLA MUNDO\r";

	cout << "" << endl;

	cout << "HOLA MUNDO\a";
	cout << "HOLA MUNDO\a";

	cout << "" << endl;

	cout << "\\HOLA MUNDO\\" << endl;
	cout << "\\HOLA MUNDO\\";

	cout << "" << endl;

	cout << "\'HOLA MUNDO\'" << endl;
	cout << "\'HOLA MUNDO\'";

	cout << "" << endl;

	cout << "\"HOLA MUNDO\"" << endl;
	cout << "\"HOLA MUNDO\"";



	return 0;
}
*/
/*
int main() 

{

	float x, y, suma,resta,multiplicacion,division;
	x = 16;
	y = 3;
	suma = x + y;
	resta = x - y;
	multiplicacion = x * y;
	division = x / y;

	cout << "El resultado de la suma de " << x << " y " << y <<" es: "<< suma << endl;
	cout << "El resultado de la resta de " << x << " y " << y << " es: " << resta << endl;
	cout << "El resultado de la multiplicaciom de " << x << " y " << y << " es: " << multiplicacion << endl;
	cout << "El resultado de la division de " << x << " y " << y << " es: " << division << endl;


	return 0; 

}
*/

int main()
{
	float x, y, suma, resta, multiplicacion, division;

	cout << "Por favor ingrese un numero: ";
	cin >> x;

	cout << "Por favor ingrese un numero: ";
	cin >> y;

	suma = x + y;
	resta = x - y;
	multiplicacion = x * y;
	division = x / y;

	cout << "El resultado de la suma de " << x << " y " << y << " es: " << suma << endl;
	cout << "El resultado de la resta de " << x << " y " << y << " es: " << resta << endl;
	cout << "El resultado de la multiplicaciom de " << x << " y " << y << " es: " << multiplicacion << endl;
	cout << "El resultado de la division de " << x << " y " << y << " es: " << division << endl;

	return 0;
}