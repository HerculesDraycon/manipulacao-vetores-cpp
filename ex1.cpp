/*Algoritmo que recebe 20 valores inteiros positivos e os armazena em
um vetor. Em seguida, verifica se todos os elementos do vetor são pares.
O programa então imprime uma mensagem informando se todos os elementos
do vetor são pares ou não.*/

#include <iostream>
using namespace std;

int main(){

    int vetor[20];
    int v = 0, impares = 0;

    for(int i=0; i<20; i++){
        v = vetor[i];
        cin>>v;
        if(v%2!=0){
            impares++;
        }
    }

    if(impares>0){
        cout<<"Nem todos os inseridos sao pares";
    } else {
        cout<<"Todos os inseridos sao pares";
    }

    return 0;
}