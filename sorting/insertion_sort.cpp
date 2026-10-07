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
    //insertSort
    int temp, apmainas=1, salidzinasana=0, maina=0;
    for(int i=1 && apmainas; i<n ; i++){ //&& apmainas
        apmainas = 0;
        for(int j=i; j>0; j--){
            salidzinasana++;
            if(mas[j]<mas[j-1]){
                
                //apmaina
                temp = mas[j];
                mas[j]=mas[j-1];
                mas[j-1] = temp;
                apmainas = 1;
                maina++;
            }

        cout<<endl;
        for (int x = 0; x < n; x++) {
            cout << mas[x] << " ";
        }
        cout << endl;

        }
        }


        //sakartots masivs
    cout<<"\nSakartots masivs: ";
    for(int i=0; i<n; i++){
        cout<<mas[i]<<" ";
    }
    cout<<"\nBija salidzinasanas: "<<salidzinasana;
    cout<<"\nBija apmainas: "<<maina;
    
    return 0;
}
