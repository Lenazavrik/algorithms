#include <iostream>
#include <cstdlib>
#define N 100
using namespace std;

int main(){
    int mas[N], x, i;
    cout<<"Ievadiet cik bus skaitli [1-20]: "; cin>>x;
    //mas ievads
    for(i=0; i<x; i++){
        cout<<"Ievadiet skaitli ["<<i<<"]: "; cin>>mas[i];
    }
    //mas izvads
    cout<<"\nIevaditie elementi: ";
     for(int i=0; i<x; i++){
        cout<<mas[i]<<" ";
     }
     cout<<endl;

    //burbulisa
    int s, j;
    int L=0; 
    int R=x-1; 
    int e=0, e2=0;
    int c=1;
    for(j=L; j<R && c==1; j++){
        c=0;
        for(i=L; i<R-j; i++){
            e++;
        if(mas[i]>mas[i+1]){
            s=mas[i];
            mas[i]=mas[i+1];
            mas[i+1]=s;
            e2++;
            c=1;
        }
    for(int v=0; v<x; v++){
        cout<<mas[v]<<" ";
     }
     cout<<endl;
    }
    }
    cout<<"\nSakartosana no kreisas puses: ";
    for(int i=0; i<x; i++){
        cout<<mas[i]<<" ";
    }
    cout<<"\nBija apmainas: "<<e2;
    cout<<"\nBija salidzinasanas: "<<e;
    cout<<endl;

    return 0;
}