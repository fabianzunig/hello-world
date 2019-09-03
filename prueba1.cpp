#include<iostream>
using namespace std;
struct ficha{
	string nombre;
	string rut;
	float nota1;
	float nota2;
	float nota3;
	float estado;
};
ficha alumno[10];
int main(){
int opcion,i,posicion;
while(true){
for(i=0;i<=9;i++){
	if(alumno[i].nombre==""){
		posicion=i;
	break;
	}
}
cout<<"\nNOTA ESTUDIANTE"<<endl<<"  1. Mostrar alumnos"<<endl<<"  2. Ingresar alumno"<<endl<<"Opcion: ";
cin>>opcion;
switch(opcion){
	case 1:
		for(i=0;i<posicion;i++){
			cout<<"Nombre: "<<alumno[i].nombre<<endl;
			cout<<"RUT: "<<alumno[i].rut<<endl;
			cout<<"Notas: "<<alumno[i].nota1 <<" // "<<alumno[i].nota2 <<" // "<<alumno[i].nota3 <<endl; 
			alumno[i].estado=(alumno[i].nota1+alumno[i].nota2+alumno[i].nota3)/3;
			if(alumno[i].estado>=4.0){
				cout<<"Estado: APROBADO"<<endl;
			}
			else{
				cout<<"Estado: REPROBADO"<<endl;
			}
			cout<<"_____________________"<<endl;
		}
		break;
	case 2:
		cout<<"Nombre: ";
		cin>>alumno[posicion].nombre;
		cout<<"RUT: ";
		cin>>alumno[posicion].rut;
		cout<<"Nota 1: ";
		cin>>alumno[posicion].nota1;
 		cout<<"Nota 2: ";
		cin>>alumno[posicion].nota2;
		cout<<"Nota 3: ";
		cin>>alumno[posicion].nota3;
	break;
}
}
}
