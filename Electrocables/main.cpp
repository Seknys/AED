#include <iostream>
using namespace std;
void prog(string nom ,int n );


int main() {

  	string nom;
	int n;

  cout<<"\tEMPRESA ELECTROCABLES"<<endl;
  cout<<"\tEste es un software contable"<<endl;
  cout<<endl;
  cout<<"Ingrese el nombre del lugar de instalacion"<<endl;
  cin>>nom;
  cout<<"Ingrese el numero de puntos de red que van a ser instalados "<<endl;
  cin>>n;
  prog( nom ,n );
}

void prog(string nom ,int n )
{
	int num[100];
	int dis, conect;
  float dist,costo, precioConect,macho,hembra,matUtil,ganancia;
	for (int i=1; i<=n;i++){
    cout<<"Punto de red # "<<i<<endl;
    //cin>>num[i];
    cout<<"Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad"<<endl;
    cin>>dis;
    cout<<"Ingrese el numero de conectores para el punto de red"<<endl;
    cin>>conect;
    dist= i*dis*conect+(i*dis*conect*0.05);
    costo=i*conect*dis*0.90;
    macho=6*i*0.15;
    hembra=6*i*0.30;
    precioConect=i*macho*hembra+(macho*hembra*0.15);
    matUtil=costo+precioConect;
    ganancia=matUtil*0.45;
  }
  cout<<"\tEl detalle de la instalacion es la siguiente"<<endl;
  cout<<"La distancia total del cable utilizado en la instalacion es de: "<<dist<<endl;
  cout<<"El costo del cable segun la categoria 5e es: "<<costo<<endl;
  cout<<"El precio total de los conectores RJ45 (hembra y macho) es: "<<precioConect<<endl;
  cout<<"El total del material utilizado es: "<<matUtil<<endl;
  cout<<"La ganancia es: "<<ganancia<<endl;
  cout<<"El total a pagar por su instalacion es: "<<matUtil+ganancia<<endl;
  cout<<"Lugar de instalacion es: "<<nom;
}
