#include <iostream>
#include <cstdlib>
#define N 100
using namespace std;
void ievads(int mas[], int n);
void izvads(int mas[], int n);
void interpolacija(int mas[], int n);

int main(){
    int mas[N];
    int n;
    cout<<"Ievadiet cik bus skaitlu: "; cin>>n;
    ievads(mas, n);
    izvads(mas, n);
    interpolacija(mas, n);
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
//interpolacija
void interpolacija(int mas[], int n){
    int i, L=0, R=n-1, x;
    cout<<"\nIevadiet ciparu kuru meklesiet: "; cin>>x;
    for(i=L+(R-L)*(x-mas[L])/(mas[R]-mas[L]); L<=R && mas[i]!=x; i=L+(R-L)*(x-mas[L])/(mas[R]-mas[L])){
        if(mas[i]<x) L=i+1; else R=i-1;
    }


        if(mas[i]==x && mas[i]!=0) cout<<"\nSkaitlis ir atrasts!";
        else cout<<"\nSkaitlis nav atrasts!";
}