/*Algoritmo que solicita 50 valores inteiros ao usuário, armazena esses
valores em um arranjo chamado vet1. Depois, copia o conteúdo desse arranjo
para um segundo arranjo chamado vet2.
O programa imprime os dois arranjos na tela.*/

#include <iostream>
using namespace std;

int main(){

    int vet1[50];
    int vet2[50];
    int i;

    cout<<"Selecione 50 numeros em sequencia."<<endl;

    for(i=0; i<50; i++){
        cin>>vet1[i];
    }

    for(i=0; i<50; i++){
        vet2[i]=vet1[i];
    }

    cout<<"Impressao de vet1: "<<endl;
    for(i=0; i<50; i++){
        cout<<vet1[i]<<" ";
    }

    cout<<endl;
    cout<<"Impressao de vet2: "<<endl;
    for(i=0; i<50; i++){
        cout<<vet2[i]<<" ";
    }

    return 0;
}