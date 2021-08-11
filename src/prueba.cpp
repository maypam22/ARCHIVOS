#include <iostream>
using namespace std;
#include <fstream>
string nombrearchivo; 
void escribirArchivo();
void leerArchivo();
void menu();

int main() 
{
  
  int n;
  do{
  menu();
  cin >> n;
  cout<< "****************************************"<<endl;
  switch (n){
   case 1:
   escribirArchivo();
   break;
   case 2:
   leerArchivo();
   break;}
   
  }
  while(n!=0);
  cout << "*****MUCHAS GRACIAS*****"<<endl;
}

void escribirArchivo()
{
  string nombre;
  string apellido,carrera;
  int long cedula;
  int edad;
  char r;
  ofstream archivoprueba;
  cout<<"Ingrese el nombre del archivo: "<<endl;
  while(getchar()!='\n');  
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido);
    cout <<"\t Ingrese la carrera que cursa actualmente: ";
    getline(cin,carrera);
    cout <<"\t Ingrese el numero de cedula: ";
    cin >> cedula;
    cout<<"\t Ingrese la edad: ";
    cin>>edad;
    archivoprueba<<nombre<<" "<<apellido<<" "<<carrera << " " << cedula<< " " << edad <<endl;

    cout<<"Desea ingresar otro contacto s/n ";

    cin>>r;

    cin.ignore();
  }
  while(r=='s');

  archivoprueba.close();

}


void leerArchivo()
{
  string nombre;
  string apellido,carrera;
  int edad;
  int long cedula;
  ifstream archivolectura(nombrearchivo);
  string texto;
  while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>carrera>>cedula>>edad;

      if(!archivolectura.eof())
            {
              cout<<"Nombre: "<<nombre<<endl;
              cout<<"Apellido: "<<apellido<<endl;
              cout<<"Carrera: "<<carrera<<endl;
              cout<<"Cedula: "<<cedula<<endl;
              cout<<"Edad: "<<edad<<endl;
              cout <<"**********************************************"<<endl;
            }
    }
  archivolectura.close();

}
void menu (){
  int menu;
  cout << "Opciones"<<endl;
  cout << "1)Ingresar datos"<<endl;
  cout << "2)Muestre resultados"<<endl;
  cout << "0) Salir" << endl;
  cout<< "Digite la opcion que desea: ";
}