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

    //kartosana ar izveli
    int min=0, max=n-1, temp; //robezas un elementa samainisanai temp
    int apmainas, salidzinasana;
    for(int i=min; i<max; i++){
        int min2=i; //minimala pozicija
        for(int j=i+1; j<n; j++){
            if(mas[j]<mas[min2]){
                min2=j;//indekss mazaka elementa
            }
            salidzinasana++;
        }

    if(min2!=i){
        temp=mas[i];
        mas[i]=mas[min2];
        mas[min2] = temp;
        apmainas++;
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
    cout<<endl;
    }

    //kartosanas izvads
    cout<<"Sakartots masivs: ";
    for(int i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
    cout<<"\nBija "<<apmainas<<" apmainas\n";
    cout<<"Bija "<<salidzinasana<<" salidzinasanas\n";
    return 0;
}