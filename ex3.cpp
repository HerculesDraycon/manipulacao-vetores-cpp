/*O algoritmo faz com que vet2 copie vet1, mas de forma inertida, ou seja,
começando de trás para a frente, em seguida, imprime vet1 e vet2.*/

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
    for(i=49; i>=0; i--){
        cout<<vet2[i]<<" ";
    }

    return 0;
}