#include <iostream>
#ifndef MICLASE_H
#define MICLASE_H

class MiClase {
	private:
		int* pointer;
		int size;

	public:
		MiClase(); //por defecto
		MiClase(int); //recibe un size
		int get(int); //retorna el valor de una casilla
		void set(int, int); //establece el valor indicado en la casilla indicada
		~MiClase();
};
#endif
