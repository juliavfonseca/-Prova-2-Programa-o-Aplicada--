#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cin;


void MIN(vector<int> vet)
{
    int getIndex = 0;
    int min = vet[0];
    for(int i =0; i < vet.size(); i++)
    {
        if(min >= vet[i]){
            min = vet[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Endereco: "<<&vet[getIndex]<<endl;
}

void MAX(vector<int> vet)
{
    int getIndex= 0;
    int max = vet[0];
    for(int i = 0; i < vet.size(); i++)
    {
        if(max <= vet[i]){
            max = vet[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Endereco: "<<&vet[getIndex]<<endl;
}

void MOSTRA(int vsize, vector<int> vet, vector<int> *pp)
{
    cout<<"\nVetor tem "<<vsize<<" números"<<endl;
    for(int i = 0; i < vet.size(); i++)
    {
        cout<<vet[i]<<"\t";
    }
    cout<<"\nEndereco"<<pp<<endl;
}


int main(){
    
    int num;
    char resp = 's';
    int tamanho;
    
    vector<int> vetor;
    vector<int> *p = &vetor;

    cout<<"Digite um numero :"<<endl;
    cout<<"--------------------------------"<<endl;
    do{
        cin>> num;        
        vetor.push_back(num);
        cout<<"Continuar digitando outros numeros? (s/n)"<<endl;
        cin>>resp;
        if(resp == 's')
        {
            cout<<"Digite seu número:"<<endl;
            cout<<"--------------------------------"<<endl;
        }
        else{
            tamanho = vetor.size();
            cout<<"---------------------------------"<<endl;
        }
    }while(resp =='s');
    cout<<endl;
    MOSTRA(tamanho,vetor,p);
    cout<<"----------------------------------"<<endl;
    MIN(vetor);
    MAX(vetor);
    
    
    return 0;
    
}
