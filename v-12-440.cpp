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
//M:stampa vettore 
  cout<<"\nEcco il vettore di ingresso: {";
  for(int i=0; i<riempi; i++)
     cout<<" "<<ingresso[i]<<";";
  cout<<"}";
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
  for(int i=0; i<riempi; i++){
    if(ingresso[i]>a && ingresso[i]<b){
      uscita[k++]=ingresso[i];
    }
  }
  //M:stampa nuovo vettore
  cout<<"\nIl vettore uscita è {";
  for(int i=0; i<k; i++)
      cout<<" "<<uscita[i]<<";";
  cout<<"}";
  cout<<"\n\n";
}
