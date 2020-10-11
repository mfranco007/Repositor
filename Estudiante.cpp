#include<iostream>
using namespace std;
class Estudiante{

	protected : string nombres,apellidos, carrera,seccion;
				int telefono;	
	protected :
		Estudiante(string nom,string ape,string carr,string secc,int tel){
			nombres=nom;
			apellidos=ape;
			carrera=carr;
			telefono=tel;
			seccion=secc;
				
		}
		

		void agregar();
		void mostrar();
};


