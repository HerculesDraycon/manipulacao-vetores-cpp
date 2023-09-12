/*O algoritmo recebe 20 valores inteiros positivos e armazena 10
desses valores no vetor A e 10 no vetor B. Em seguida, o programa
preenche um terceiro vetor C de acordo com os seguintes critérios:
- Ci recebe 1 quando Ai for maior que Bi ;
- Ci recebe 0 quando Ai for igual a Bi ;
- Ci recebe -1 quando Ai for menor que Bi .
Por fim, o programa imprime A, B e C. */

#include <iostream>
using namespace std;

int main(){

    int P[20];
    int A[10];
    int B[10];
    int C[10];
    int i;

    cout<<"Escolha 20 numeros."<<endl;

    for(i=0; i<20; i++){
        cin>>P[i];
    }

    for(i=0; i<10; i++){
        A[i]=P[i];
    }

    cout<<"Vetor A: "<<endl;

    for(i=0; i<10; i++){
        cout<<A[i]<<" ";
    }

    for(i=0; i<10; i++){
        B[i]=P[i+10];
    }

    cout<<endl;
    cout<<"Vetor B: "<<endl;

    for(i=0; i<10; i++){
        cout<<B[i]<<" ";
    }

    cout<<endl;
    cout<<"Vetor C: "<<endl;

    for(i=0; i<10; i++){
        if(A[i]>B[i]){
            C[i] = 1;
        } else if (A[i]==B[i]){
            C[i] = 0;
        } else if (B[i]>A[i]){
            C[i] = -1;
        }
        
    }

    for(i=0; i<10; i++){
        cout<<C[i]<<" ";
    }

    return 0;
}