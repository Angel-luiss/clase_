#include "Persona.cpp"
#include <iostream>
using namespace std;
class Propietario : Persona {
	//2 atributos
	private : string nit;
	private : string nit;
	
	public : 
	Cliente(string nom,string ape,string dir,int tel,string f,string n) : Persona(nom,ape,dir,tel,f){
		nit = n;
		cui = c;
	}
	
	
	void setNit(string n){nit = n;}
	//cui
	void setNit(string c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFN(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	
	string getNit(){return nit;}
	string getNit(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}	
	int getTelefono(){return telefono;}


void mostrar(){
		cout<<"_____"<<endl;
		cout<<"Nit:"<<nit<<endl;
		//cui
		cout<<"Cui:"<<cui<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Nacimiento:"<<fn<<endl;
	}
		
};
