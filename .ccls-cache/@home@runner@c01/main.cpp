#include <iostream>
#include <string.h>
#include "Datos.h"

void cargo();
void pab();
void registro();
using namespace std;

struct Pabellon{

  char letra[2];
  int aula;
};

struct Persona{

  char nombre[45];
  int codigo;
  int telefono;
};
void registro(Persona * );
void mostrar(Persona *);
int main() { 
  
int *op = new int;
int *op2 = new int;
int *op3 = new int;
Persona *perso = new Persona;
Pabellon *pabe = new Pabellon; 
  *op= Cargo(*&op);
  switch (*op){
    
    case 1:  
        registro(perso);
        mostrar(perso);
        cout<<"\nEntrar por la puerta 1 y 2 Porfavor ";
      break;
    case 2:
        registro(perso);
        mostrar(perso);
        cout<<"\nEntrar por la puerta 7 Porfavor";
      break;
    case 3:
        registro(perso);
        mostrar(perso);
        cout<<"\nEntrar por la puerta 1 y 2 Porfavor "; 
      break;
    case 4:
        registro(perso); 
        *op2= Pab(*&op2);
          switch (*op2){
            
            case 1:
              mostrar(perso);    
              cout<<"\nEntrar por la puerta 4 Porfavor";
              break;
            case 2:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 8 Porfavor";
              break;
            case 3:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 4 Porfavor";
              break;
            case 4:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 4 Porfavor";
              break;
            case 5:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 7 Porfavor";
              break;
            case 6:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 8 Porfavor";
              break;
            case 7:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 7 Porfavor";
              break;
            case 8:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 7 Porfavor";
              break;
            case 9:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 8 Porfavor";
              break;
            case 10:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 8 Porfavor";
              break;
            case 11:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 8 Porfavor";
              break;
            case 12:
              mostrar(perso);
              cout<<"\nEntrar por la puerta 7 Porfavor";
              break;
            default: 
              cout<<"Saliendo ";
              break;
            }   
        break;
    default:
        cout<<"\nSaliendo :D";
        break;
    }
  delete perso;
  delete pabe;
  delete op;
  delete op2;
  delete op3;
  return 0;
}
void registro(Persona *perso){
  
  cout<<"\nIngrese Nombre: ";
  cin.get();
  cin.getline(perso->nombre,45);
  cout<<"\nIngrese codigo: ";
  cin>>perso->codigo;
  cout<<"\nIngrese su telefono: ";
  cin>>perso->telefono;
  return;
}
void mostrar (Persona *perso){ 
  
  cout<<"\nNombre: "<<perso->nombre<<"\nCodigo: "<<perso->codigo<<"\nTelefono: "<<perso->telefono<<"\nBienvenido a la Universidad Continental.";
  return;
}

