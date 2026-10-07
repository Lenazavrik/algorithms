#include <iostream>
#include <cstdlib>
#define N 100
using namespace std;
void ievads(int mas[], int n);
void izvads(int mas[], int n);
void binarais(int mas[], int n);

int main(){
    int mas[N];
    int n;
    cout<<"Ievadiet cik bus skaitlu: "; cin>>n;
    ievads(mas, n);
    izvads(mas, n);
    binarais(mas, n);
    //system("pause>nul");
    return 0;
}

void ievads(int mas[], int n){
    int i;
    for(i=0; i<n; i++){
        cout<<"\nmas["<<i<<"]=";
        cin>>mas[i];
    }
}

void izvads(int mas[], int n){
    int i;
    cout<<"Masiva elementi: ";
    for(i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
}
//binarais
void binarais(int mas[], int n){
    int i, x, L, R;//L = Left, R = Right
    cout<<"\nKo meklesim? "; cin>>x;
    L=0;
    R=n-1;
    //For
    for(i=(L+R)/2; L<=R && mas[i]!=x; i=(L+R)/2){
        if(mas[i]<x) L=i+1; else R=i-1;
    }

//While
    /*i=(L+R)/2;
    while(L<=R && mas[i]!=x){
        if(mas[i]<i) L=i+1; else R=i-1;
        i=(L+R)/2;
    }*/


    if(mas[i]==x) cout<<"\nSkaitlis ir atrasts";
        else cout<<"\nSkaitlis nav atrasts";
}