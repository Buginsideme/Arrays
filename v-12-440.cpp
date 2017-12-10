/*Dato un vettore di numeri reali ordinato e due suoi elementi a e b, tali che
a<=b, memorizzare in un vettore uscita tutti gli elementi del vettore iniziale
compresi tra a e b*/

#include<iostream>
using namespace std;

const int Max=20;
typedef int vettore[Max];

int main(){
  vettore ingresso, uscita;
  int riempi, k=0, a, b;      //a e b sono gli "estremi" tali che a<=b
//M:riempimento del vettore e verifica
  cout<<"\nInserisci il riempimento del vettore di ingresso (1-"<<Max<<"): ";
  cin>>riempi;
  while(riempi<1 || riempi>Max){
    cout<<"\nERRORE! riempimento invalido, reinseriscilo (1-"<<Max<<"): ";
    cin>>riempi;
  }
//M:inserimento valori nel vettore ingresso
  for(int i=0; i<riempi; i++){
    cout<<"\nDammi il "<<i+1<<"° valore: ";
    cin>>ingresso[i];
  }
//M:definizione estremi
  cout<<"\nDammi il primo estremo: ";
  cin>>a;
  cout<<"\nDammi il secondo estremo: ";
  cin>>b;
//M:controllo estremi
 while(a>=b){
    cout<<"\nEstremi non validi! reinseriscili (a<=b): ";
    cout<<"\nReinserisci il primo estremo: ";
    cin>>a;
    cout<<"\nReinserisci il secondo estremo: ";
    cin>>b;
  }
//M:copia selettiva dei valori compresi tra gli estremi
  cout<<"\nIl vettore uscita è {";
  for(int j=0; j<riempi; j++){
    if(ingresso[j]>=a && ingresso[j]<=b){
      uscita[k++]=ingresso[j];
      cout<<" "<<uscita[k]<<";";
    }
  }
  cout<<"}";
  cout<<"\n\n";
}
