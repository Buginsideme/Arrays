//Sorry i'll traslate it later.
/*Programma che dato un numero da tastiera lo mette in un vettore se è pari
e in un altro se è dispari, con terminazione 0*/
#include<iostream>
using namespace std;

const int md=20;
typedef int vettore[md];

int main(){
  vettore pari, dispari;
  int numero, i=0, j=0, termine=0;
  do{
    cout<<"\nInserisci un numero (0-"<<md<<"): ";
    cin>>numero;
    if((numero%2)==0){
      pari[i++]=numero;
    }
    else{
      dispari[j++]=numero;
    }
  }while(numero!=termine);
  cout<<"\nInserimento terminato, ecco i vettori: "<<"\v";
  cout<<"\nEcco i numeri pari: {";
  for(int p=0; p<i; p++){
    cout<<" "<<pari[p]<<";";
  }
  cout<<"}"<<"\v";
  cout<<"\nEcco i numeri dispari: {";
  for(int d=0; d<j; d++){
    cout<<" "<<dispari[d]<<";";
  }
  cout<<"}";
  cout<<"\n\n";
}
