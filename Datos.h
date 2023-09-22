#include <iostream>
#include <string.h>
using namespace std;

float Cargo(int *&op){
  
    do{
      cout<<"\n\t-----CARGO-----";
      cout<<"\n*[1] Personal Administrativo *";
      cout<<"\n*[2] Personal de Limpieza    *";
      cout<<"\n*[3] Profesor                *";
      cout<<"\n*[4] Alumno                  *";
      cout<<"\n*[5] Salir                   *";
      cout<<"\n------------------------------";
      cout<<"\nIngrese su opción [1-5]: ";
      cin>>*op;
      if(*op<1||*op>5)
        cout<<"\nError... Ingrese una opción válida.";
    }while(*op<1||*op>5); 
  return *op;
}

float Pab (int *&op2)
{
      do{
      cout<<"\n\t------Ingrese Pabellon------";
      cout<<"\n*[1] A                       *";
      cout<<"\n*[2] B                       *";
      cout<<"\n*[3] C                       *";
      cout<<"\n*[4] D                       *";
      cout<<"\n*[5] E                       *";
      cout<<"\n*[6] F                       *";
      cout<<"\n*[7] G                       *";
      cout<<"\n*[8] H                       *";
      cout<<"\n*[9] I                       *";
      cout<<"\n*[10] J                      *";
      cout<<"\n*[11] K                      *";
      cout<<"\n*[12] L                      *";
      cout<<"\n*[13] Salir                  *";
      cout<<"\n------------------------------";
      cout<<"\nIngrese su opción [1-13]: ";
      cin>>*op2;
      if(*op2<1||*op2>13)
        cout<<"\nError... Ingrese una opción válida.";
    }while(*op2<1||*op2>13); 
  return *op2;
}