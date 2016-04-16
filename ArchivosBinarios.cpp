//============================================================================
// Name        : ArchivosBinarios.cpp
// Author      : Martín
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<fstream>
#include<cstdio>

using namespace std;

struct Equipo{
	char Nombre[50];
	int Integrantes;
	int Puntaje;
}T1, T2, T3, T4, T5;

ofstream fs("Equipos.txt", ios::binary| ios::app);

 void ascendente(int a[], int b){
	int Temp;
	for(int i=0; i<b;i++){
		for(int j=0;j<b-1;j++){
			if(a[j]>a[j+1]){
				Temp=a[j];
				a[j]= a[j+1];
				a[j+1]=Temp;
			}
		}
	}
	for(int o=0; 0<b; o++){

	}
}

int main(){
	cout << "Sean Bienvenidos A Las Inscripciones De Equipo"<<endl<<endl;

	cout<<"Ingrese los datos del primer equipo"<<endl;
	cout<<"Ingrese el nombre del equipo:";
	cin>>T1.Nombre;
	cout<<"Ingrese el numero de integrantes del equipo:";
	cin>>T1.Integrantes;
	cout<<"Ingrese el puntaje del equipo:";
	cin>>T1.Puntaje;
	cout<< endl;

	cout<<"Ingrese los datos del segundo equipo"<<endl;
	cout<<"Ingrese el nombre del equipo:";
	cin>>T2.Nombre;
	cout<<"Ingrese el numero de integrantes del equipo:";
	cin>>T2.Integrantes;
	cout<<"Ingrese el puntaje del equipo:";
	cin>>T2.Puntaje;
	cout<< endl;

	cout<<"Ingrese los datos del tercer equipo"<<endl;
	cout<<"Ingrese el nombre del equipo:";
	cin>>T3.Nombre;
	cout<<"Ingrese el numero de integrantes del equipo:";
	cin>>T3.Integrantes;
	cout<<"Ingrese el puntaje del equipo:";
	cin>>T3.Puntaje;
	cout<< endl;

	cout<<"Ingrese los datos del cuarto equipo"<<endl;
	cout<<"Ingrese el nombre del equipo:";
	cin>>T4.Nombre;
	cout<<"Ingrese el numero de integrantes del equipo:";
	cin>>T4.Integrantes;
	cout<<"Ingrese el puntaje del equipo:";
	cin>>T4.Puntaje;
	cout<< endl;

	cout<<"Ingrese los datos del quinto equipo"<<endl;
	cout<<"Ingrese el nombre del equipo:";
	cin>>T5.Nombre;
	cout<<"Ingrese el numero de integrantes del equipo:";
	cin>>T5.Integrantes;
	cout<<"Ingrese el puntaje del equipo:";
	cin>>T5.Puntaje;
	cout<< endl;


	cout<<"Selecciones una forma para guardar la informacion de los equipos"<<endl<<endl;
	int Guardado;
	cout<<"Para un guardado ascendente presione 1"<<endl;
	cout<<"Para un guardado descendente presione 2"<<endl;
	cout<<"Ingrese un numero";
	cin>>Guardado;


	if(Guardado > 0 && Guardado <3){
		switch(Guardado){
			case 1:
				if(!fs){
					cout<<"No se puede abrir el archivo"<<endl;
				}else{
					int b= 5;
					int a[b];
					a[0]=T1.Puntaje;
					a[1]=T2.Puntaje;
					a[2]=T3.Puntaje;
					a[3]=T4.Puntaje;
					a[4]=T5.Puntaje;
					for(int i=0;i<1;i++){
						ascendente(a,b);
					}
				}
		}
	}
fs.close();
}
