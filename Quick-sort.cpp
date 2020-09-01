#include <iostream>
using namespace std;

 int particao(int vetor[],int posi,int tam){

    int x = vetor[tam];
    int i = posi-1;
    for(int j=posi; j<tam; j++){
        if(vetor[j]<=x){
            i=i+1;
            int aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
        }
    }
    int aux2 = vetor[i+1];
    vetor[i+1]= vetor[tam];
    vetor[tam] = aux2;
    return i+1;
}

void quicksort(int vetor[],int posi,int tam){
    if(posi<tam){
        int q = particao(vetor,posi,tam);
        quicksort(vetor,posi,q-1);
        quicksort(vetor,q+1,tam);
    }
}

int main(){

int vetor[15]={9,10,-1,3,6,2,1,-3,1,0,-2,15,8,-7,0};
int posiInicial=0;
int tamanho =14;

cout<<"Vetor Desordenado"<<endl;
cout<<"{";

for(int k =0 ; k<=14; k++){
    cout << vetor[k]<<",";
}
cout<<"}";
cout<<endl;

quicksort(vetor,posiInicial,tamanho);

cout<<"Vetor Ordenado"<<endl;
cout<<"{";

for(int l =0 ; l<15;l++){
    cout << vetor[l]<<",";
}
cout<<"}";
return 0;
}
