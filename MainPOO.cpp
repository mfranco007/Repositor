#include "Universidad.cpp"
#include<iostream>
using namespace std;
main(){
	string nombres,apellidos,carrera,seccion;
	int telefono,codigo;
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Carrera:";
	cin>>carrera;
	cout<<"Ingrese seccion:";
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Universidad obj = Universidad(nombres,apellidos,telefono,codigo,carrera,seccion);
	obj.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Carrera:";
	cin>>carrera;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese seccion: ";
	cin>>seccion;
	obj.setCodigo(codigo);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	obj.setTelefono(telefono);

	cout<<obj.getCodigo()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getCarrera()<<endl;
	cout<<obj.getSeccion()<<endl;
	cout<<obj.getTelefono()<<endl;
	
	
}
