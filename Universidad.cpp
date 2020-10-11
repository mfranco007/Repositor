#include "Estudiante.cpp"
#include<iostream>

using namespace std;
class Universidad:Estudiante{

	private : int codigo;
	public: 

		Universidad(string nom,string ape,int tel,int cod,string carr,string secc):Estudiante(nom,ape,carr,secc,tel){
			codigo=cod;
		}

	void setCodigo(int cod){codigo=cod;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setCarrera(string carr){carrera=carr;}	 
	void setSeccion(string secc){seccion=secc;}	 
	void setTelefono(int tel){telefono=tel;}	 
	  
	 	int getCodigo(){return codigo;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	string getCarrera(){return carrera;}
	 	string getSeccion(){return seccion;}
	 	int getTelefono(){return telefono;}	

		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<codigo<<","<<nombres<<", "<<apellidos<<", "<<telefono<<", "<<seccion<<", "<<carrera<<endl;
}
};


