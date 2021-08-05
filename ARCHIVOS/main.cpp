//PASAR AL CODEBLOCKS
#include <iostream>
using namespace std;
//LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>
string nombrearchivo;
void escribirArchivo();
void leerArchivo();


int main() {

  escribirArchivo();
  leerArchivo();
}
void escribirArchivo(){
string nombre;
string apellido;
int edad;
char r;
ofstream archivoprueba;
cout << "Ingrese el nombre del archivo"<<endl;
getline(cin,nombrearchivo);
archivoprueba.open(nombrearchivo.c_str(),ios::out);
do
{
 cout <<"\tIngresa el nombre: ";
 getline(cin,nombre);
 cout <<"\tIngresa el apellido: ";
 getline(cin,apellido);
 cout <<"\tIngresa la edad: ";
 cin >>edad;
 archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;
 cout<< "Desea ingresar otro contanto s/n";
 cin >>r;
 // ignore el enter y lea el nombre o el dato
 cin.ignore();

}while(r=='s');

 archivoprueba.close();

}
void leerArchivo()
{
  string nombre;
  string apellido;
  int edad;
  ifstream archivolectura(nombrearchivo,ios::in);
  string texto;
  if (archivolectura.fail() )
  {
    cout << "EL ARCHIVO NO SE PUDO LEER, O NO EXISTE";

  }
  else {
    while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>edad;


     if (archivolectura.fail() )
     {
      cout<< "-----------------------\n";
      cout << "nombre: \t"<< nombre<<endl;
      cout << "apellido: \t"<< apellido<<endl;
      cout << "edad: \t"<< edad<<endl;
      cout << "----------------------"<<endl;
     }
    }

  }
  archivolectura.close();
}
