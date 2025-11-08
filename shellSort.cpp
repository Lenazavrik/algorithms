#include <iostream>
#include <cstdlib>
#define N 100
using namespace std;

int main(){
    int mas[N];
    int n;

    cout<<"Ievadiet cik bus cipari: "; cin>>n;

    //mas ievads
    for (int i=0; i<n; i++){
        cout<<"Ievadiet skaitli ["<<i<< "]: ";
        cin>>mas[i];
    }

    //mas izvads
    cout<<"\nIevaditie elementi: ";
    for (int i=0; i<n; i++){
        cout<<mas[i]<< " ";
    }
    cout<<endl;

    //kartosana ar sella algoritmu
    int d = n/2, temp, t;
    while(d>=1){
        for(int i =d; i<n; i++){
            for(int j = i-d; j>=0; j-=d){

                for(int t=j; t>=0; t-=d){
                    if(mas[t]>mas[t+d]){
                    temp=mas[t];
                    mas[t]=mas[t+d];
                    mas[t+d] = temp;
                } else t = false;
                }

        //cout<<"\ngarums= "<<d<<endl;
        for (int x = 0; x < n; x++) {
            cout << mas[x] << " ";
        }
        cout << endl;
            
            }
        }

        
        d/=2;
    }

//kartosanas izvads
    cout<<"\nSakartots masivs: ";
    for(int i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
}