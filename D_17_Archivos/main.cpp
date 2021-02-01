#include <iostream>
#include <fstream>
using namespace std;

void namef(string n_archivo);
void usu(string n_archivo);
void impri(string n_archivo);

int main()
{
  int t;
  string name;
  do
  {
    cout<<"___________________________";
    cout<<"\n\t\tMENU\n";
    cout<<"1.-Ingresar el nombre del archivo\n";
    cout<<"2.-Ingresar usuario\n";
    cout<<"3.-Imprimir datos\n";
    cout<<"4.-Salir\n";
    cout<<"Ingrese la opcion que desea: ";
    cin>>t;

    switch(t)
    {
      case 1:
        cin.ignore();
        cout<<"Ingrese el nombre del archivo: ";
        getline(cin,name);
        namef(name);
      break;
      case 2:
        cin.ignore();
        usu(name);
      break;
      case 3:
        impri(name);
      break;
      case 4:
        cout<<"Programa finalizado :)";
      break;
      default:
        cout<<"Por favor, ingrese una opcion valida!";

    }

  }while(t!=4);
}

void namef(string n_archivo)
{
  ofstream archivo;
}
void usu(string n_archivo)
{
  string nombre;
  string apellido;
  int e;
  char r;

  ofstream archivo;
  archivo.open(n_archivo.c_str(),ios::out);
  do
  {
    cout<<"\tIngrese el nombre: ";
    getline(cin,nombre);
    cout<<"\tIngrese el apellido: ";
    getline(cin,apellido);
    cout<<"\tIngrese la edad: ";
    cin>>e;
    archivo<<nombre<<" "<<apellido<<" "<<e<<endl;
    cout<<"Desea ingresar otro contacto? (s/n) ";
    cin>>r;
    cin.ignore();
  }while(r=='s');
  archivo.close();
}
void impri(string n_archivo)
{
  string nombre;
  string apellido;
  int e;
  ifstream al(n_archivo.c_str());

  while(!al.eof())
  {
    al>>nombre>>apellido>>e;
    if(!al.eof())
    {

      cout<<"Nombre: "<<nombre<<endl;
      cout<<"Apellido: "<<apellido<<endl;
      cout<<"Edad: "<<e<<endl;

    }
  }
  al.close();
}
