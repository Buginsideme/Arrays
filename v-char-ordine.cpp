//SORRY I'LL TRANSLATE IT LATER
/*Scrivere un programma che, inseriti i caratteri alfabetici da tastiera,
li stamba in ordine alfabetico.
ANALISI:
Il programma innanzitutto leggerà i 20 caratteri da tastiera e li porrà in un array.
Dopodichè utilizzando 2 cicli for annidati ogni elemento dell'array verrà
confrontato con tutti gli altri, e quando troverà una lettera che viene dopo
di essa, i due elementi verranno invertiti tra loro utilizzando una variabile ausiliaria. */
#include<iostream>
#include<cstdlib>
using namespace std;

const int Max=26;
typedef char vettore[Max];

int main(){
  vettore lettera;
  int riempi, box;    //box è la variabile ausiliaria che ci permette di ordinare gli elementi
  cout<<"\nInserire il riempimento del vettore (1 -"<<Max<<"): ";
  cin>>riempi;
//M:controllo riempimento
  while(riempi<1 || riempi>Max){
    cout<<"\nLa dimensione dell'array deve essere compresa tra 1 e "<<Max;
	  cout<<"\nReinserisci la dimensione dell'array: ";
	  cin>>riempi;
  }
//M:ciclo inserimento dei valori
  for(int i=0; i<riempi; i++){
    cout<<"\nInserire il "<<i+1<<"° elemento (a-z): ";
    cin>>lettera[i];
//M:controllo che i valori inseriti siano caratteri
    while(lettera[i]<'a' || lettera[i]>'z'){
      cout<<"Errore! Reinserisci l'elemento in "<<i+1<<"° posizione: ";
      cin>>lettera[i];
    }
  }
//M:ordinamento dei valori
  for(int i=0; i<riempi; i++){
    for(int j=0; j<riempi; j++){
      if(lettera[j]>lettera[i]){
        box=lettera[i];
        lettera[i]=lettera[j];
        lettera[j]=box;
      }
    }
  }
//M:stampa elementi
  cout<<"\nEcco il vettore ordinato : {";
  for(int i=0; i<riempi; i++){
    cout<<" "<<lettera[i]<<";";
  }
  cout<<"}";
  cout<<"\n\n";
}
