#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	string nombre[2]; //vector que va a almacenar los nombres 
	double nota[3]; //vector para almacenar las notas
	double Nsuma=0,promedio=0;
	
	for(int i=0;i<2;i++){ //ciclo que alamecna los hombres
		cout<<"\nIngrese el nombre del estudiantes No."<<i+1<<":";
		cin>>nombre[i];
		Nsuma=0;
		
		for(int j=0;j<3;j++){ //ciclo que almacena las notas
		cout<<"Ingrese ña nota No."<<j+1<<":";
		cin>>nota[j];
		
		//sumando todas las posiociones dek vector notas
	    Nsuma = Nsuma + nota[j];
	    }
	   //Calculo del promedio
	   promedio = Nsuma/3;
	   cout<<"\nEl promedio es: "<<promedio;
	}
	
	cout<<"\nResultados\n";
	cout<<"Nombre\tNotal\tNota2\tNota3\n";
	for(int k=0;k<2;k++){
		cout<<nombre[k]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"\n";
		
	}
	
	
		return 0;
		getch();
			
}
