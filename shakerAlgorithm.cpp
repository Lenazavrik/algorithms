#include <iostream>
#define N 100
using namespace std;

int main() {
    int mas[N];
    int n;

    cout<<"Ievadiet cik bus cipari: ";
    cin>>n;

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

    //seikera kartosana
    int min=0, max=n-1;
    int salidzinasans, apmainas;

    while (min<max && min!=max) {

        //kartosana no kreisas puses
        for (int i=min; i<max; i++){
            salidzinasans++;
            if (mas[i]>mas[i+1]){
                int temp=mas[i];
                mas[i]=mas[i+1];
                mas[i+1]=temp;
                apmainas++;
            }
        //kartosana no kreisas izvads
        for(int v=0; v<n; v++){
            cout<<mas[v]<<" ";
        }
        cout<<endl;
        }



        max--;


        //kartosana no labas puses
        for (int i=max; i>min; i--){
            salidzinasans++;
            if (mas[i]<mas[i-1]){
                int temp = mas[i];
                mas[i]=mas[i-1];
                mas[i-1]=temp;
                apmainas++;
            }
        //kartosana no labas izvads
        for(int v=0; v<n; v++){
            cout<<mas[v]<<" ";
        }
        cout<<endl;
        }


        min++;

    
    }

    //sakartosanas izvads
    cout << "\nSakārtots masīvs: ";
    for (int i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
    cout<<"\nBija "<<apmainas<<" apmainas \n";
    cout<<"\nBija "<<salidzinasans<<" salidzinasanas\n";
    cout<<endl;

    return 0;
}
