#include <iostream>

using namespace std;

int* organizar(int [],int);

int main( ) {

  int numeroMonedas;
  int *monedasOrganizadas;
  int monedasNecesitadas = 0;
  int dineroGemeloUno = 0;
  int dineroGemeloDos;

  cin >> numeroMonedas;

  int monedas[numeroMonedas];g

  for(int i = 0; i < numeroMonedas; i++) {

    cin >> monedas[i];

  }

  monedasOrganizadas = organizar(monedas,numeroMonedas);

  for(int i = 0; i < numeroMonedas; i++){
    dineroGemeloUno += monedas[i];
    dineroGemeloDos = 0;
    for(int j = i+1; j < numeroMonedas; j++){
      dineroGemeloDos += monedas[j];
    }
    if(dineroGemeloUno > dineroGemeloDos) {
      cout << i+1;
      return 0;
    }
    monedasNecesitadas++;
  }


  return 0;
}

int* organizar(int arreglo[],int n){
  int aux;
  for(int i = 0; i < n; i++)
    for(int j = i; j < n; j++){
      if(arreglo[i]<arreglo[j]) {
        aux = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = aux;
      }
    }
  return arreglo;
}
