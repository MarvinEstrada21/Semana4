#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
using namespace std;
int main(){
	Figura figura;
	Rectangulo rectangulo(10, 20);
	cout << "Área Figura: " << figura.area() << endl << "Área Rectángulo: " << rectangulo.area() << endl;
	return 0;
}
