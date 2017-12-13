/*Dato un vettore di interi memorizzare in un  vettore di uscita i numeri pari
e in un altro quelli dispari*/
#include<iostream>
using namespace std;

const int Max=10;
typedef int vettore[Max];

int main(){
  vettore in, pari, dispari;      //i tre vettori che utilizzerò
  int riempi, j=0, k=0;
  cout<<"\nInserisci il riempimento del vettore di ingresso (1-"<<Max<<"): ";
  cin>>riempi;
//M:conotrllo riempimento
  while(riempi<1 || riempi>Max){
    cout<<"\nERRORE! riempimento invalido, reinseriscilo (1-"<<Max<<"): ";
    cin>>riempi;
  }
//M:ciclo inserimento dei valori
  for(int i=0; i<riempi; i++){
    cout<<"\nDammi il "<<i+1<<"° valore: ";
    cin>>in[i];
  }
//M:copia selettiva dei valori
  for(int i=0; i<riempi; i++){
    if((in[i]%2)==0){      //A:la condizione per essere pari
      pari[j]=in[i];
      j++;
    }
    else{
      dispari[k]=in[i];
      k++;
    }
  }
//M:cicli di stampa dei vettori
  cout<<"\nEcco l'array dei numeri pari: {";
  for(int i=0; i<j; i++)               //A:la condizione deve essere che l'indice
    cout<<" "<<pari[i]<<";";           //deve essere minore del indice del nuovo
  cout<<"}"<<"\n";                     //vettore (vedi sopra)
  cout<<"\nEcco l'array dei numeri dispari: {";
  for(int i=0; i<k; i++)
    cout<<" "<<dispari[i]<<";";
  cout<<"}";
  cout<<"\n\n";
}
