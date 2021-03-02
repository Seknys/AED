#include<iostream>
#include<fstream>


using namespace std;

void llenar (int a);

int main() {

	int anios;
	ofstream  archivo;
	archivo.open("Ahorro.txt",ios::out);

	cout << "Ingresa los anios de ahorro" << endl;
	cin >> anios;
  archivo<<"Años de ahorro:"<<anios;
  archivo.close();
  cout<<"";
	llenar(anios);

	return 0;

}

void llenar (int a)
{

  ofstream  archivo;
	archivo.open("Ahorro.txt",ios::app);

	float dep,total,interes,inv,saldo;
	int x;
	inv = 0;
	saldo = 0;
	interes = 0;


	while (a>0)
	{

		for (x=1;x<=12;x++)
		{
			cout << "Ingresa el dep del mes " << x << endl;
			cin >> dep;
			saldo = saldo+dep;
      archivo<<"Deposito del mes #"<<x<<":"<<dep<<endl;
		}
		interes = interes+(saldo*.10);
		total = saldo+interes;
		cout << "Tu ahorro en el anioo es: $" << saldo << endl;
		cout << "El interes ganado es: $" << interes << endl;
		cout << "Tu ahorro ya con interes es: $" << total << endl;
		cout << "" << endl;
		a = a-1;

    archivo<<"Tu ahorro en el anioo es: $" << saldo << endl;
    archivo<<"El interes ganado es: $" << interes << endl;
    archivo<<"Tu ahorro ya con interes es: $" << total <<endl<<endl;
	}
	archivo.close();
}

