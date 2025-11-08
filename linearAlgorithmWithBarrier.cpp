#include <iostream>
#include <cstdlib>
#define N 101
using namespace std;
void ievads(int mas[], int n);
void izvads(int mas[], int n);
void parbaude(int mas[], int n);

int main(){
    int mas[100];
    int n;
    cout<<"Ievadiet ciparu daudzumu: "; cin>>n;
    ievads(mas, n);
    izvads(mas, n);
    parbaude(mas, n);
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

void parbaude(int mas[], int n){
    int i, x;
    cout<<"\nKuru skaitli meklesim? "; cin>>x;
    mas[n]=x;
    for(i=0; mas[i]!=x; i++);
    if(i<n){
        cout<<"Skaitlis ir atrasts!";
    } else cout<<"Skaitlis nav atrasts!";
}