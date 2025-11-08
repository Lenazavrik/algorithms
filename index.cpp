#include <iostream>
#include <cstdlib>
#define N 100
using namespace std;
void ievads(int mas[], int n);
void izvads(int mas[], int n);
void linearais(int mas[], int n);

int main(){
    int mas[N];
    int n;
    cout<<"Ievadiet cik bus skaitlu: "; cin>>n;
    ievads(mas, n);
    izvads(mas, n);
    linearais(mas, n);
    system("pause>nul");
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
//linearais
void linearais(int mas[], int n){
    int i, x;
    cout<<"\nKo meklesim? "; cin>>x;
    for(i=0; i<n && mas[i]!=x; i++);
    if(mas[i]==x) cout<<"\nSkaitlis ir atrasts";
        else cout<<"\nSkaitlis nav atrasts";
}