#include <iostream>
using namespace std;
int ani(int a);
int ani2(int a);
int ani3(int a);
float aux,aux2,aux3;

int main() {
	int opcion,opcion2,a,aux1,a1,a2,auxr=0,auxa,salir;
do{

cout << " ------------------------\n";
cout << " ------------------------\n";
cout << " MENU\n";
cout << " ------------------------\n";
cout << " ------------------------\n";

cout<<"1)mamiferos"<<endl;
cout<<"2)reptiles"<<endl;
cout<<"3)aves"<<endl;
cout<<"4)consultar"<<endl;
cout<<"5)salir"<<endl<<endl;

cout<<"INGRESE UNA OPCION"<<endl;

cin>>opcion;

do{
	switch(opcion){
		case 1:
			cout<<"cuantos animales mamiferos son:";
			cin>>a;
			aux1=aux1+a;
			ani(a);

			cout<<"presione 2 para salir\n";
			cin>>opcion2;
		break;
		case 2:
			cout<<"cuantos animales reptiles son:";
			cin>>a1;
			auxr=auxr+a1;
			ani2(a1);

			cout<<"presione 2 para salir\n";
			cin>>opcion2;
		break;
		case 3:
			cout<<"cuantos animales aves son:";
			cin>>a2;
			auxa=auxa+a2;
			ani3(a2);

			cout<<"presione 2 para salir\n";
			cin>>opcion2;
		break;
		case 4:
			cout<<"peso actual de mamiferos:"<<aux<<endl;
			cout<<"numero actual de mamiferos:"<<aux1<<endl<<endl;

			cout<<"peso actual peso  de reptiles:"<<aux2<<endl;
			cout<<"numero actual de reptiles:"<<auxr<<endl<<endl;

			cout<<"peso actual de aves:"<<aux3<<endl;
			cout<<"numero actual de aves:"<<auxa<<endl<<endl<<endl;

			cout<<"numero total de animales:"<<aux1+auxr+auxa<<endl;
			cout<<"El peso total de todos los animales es:"<<aux+aux2+aux3<<endl;

			cout<<"presione 2 para salir\n";
			cin>>opcion2;
		break;
		case 5	:
			cout<< "Seguro que quieres ...??   SI o NO \n";
				cout<< "\n 1- SI";
				cout<< "\n 2- NO \n\n";
				cin >> salir;
				cout<< "\n \n";
				if (salir == 1)
				{
					return 0;
				}
				else
				{
					return main();
				}
				break;
			default:
				if(opcion<1 || opcion >5)
				{
					cout<<"ESTE ES UN NUMERO INVALIDO..."<<endl;
					cout<<"INGRESE NUEVAMENTE!!!!...PORFAVOR :) :)"<<endl<<endl;
					system ("pause");
					system("cls");
					return main();
				}
			break;

		cout<<"cuantos animales aves son:";
		cin>>a2;
		auxa=auxa+a2;
		ani3(a2);

		cout<<"presione 2 para salir\n";
		cin>>opcion2;
		break;
	}


}while(opcion2!=2);
}while(opcion!= 5);
}
int ani(int a ){
float x;

	for(int i=0;i<a;i++){
		cout<<"ingrese el peso del animal "<<i+1<<":"<<endl;
		cin>>x;
		aux=aux+x;
		}
return aux;
}
int ani2(int a ){
float x;

	for(int i=0;i<a;i++){
		cout<<"ingrese el peso del animal "<<i+1<<":"<<endl;
		cin>>x;
		aux2=aux2+x;
		}
return aux2;
}
int ani3(int a ){
float x;

	for(int i=0;i<a;i++){
		cout<<"ingrese el peso del animal: "<<i+1<<endl;
		cin>>x;
		aux3=aux3+x;
		}
return aux3;
}
