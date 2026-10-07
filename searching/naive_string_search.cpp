#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void tiesaMeklesana(char text[], char find[], int textLenght, int findLenght){
    bool found1=false;

    //tiesa meklesana
    /*for(int i=0; i<=textLenght-findLenght; i++){
        bool found = true;
        for(int j=0; j<findLenght && found; j++){
            if(text[i+j]!=find[j]){
                found=false;
            }
        }*/
        int i, j;
           for( i=0; i<=textLenght-findLenght && found1==false; i++){
        for(j=0; j<findLenght && text[i+j]==find[j]; j++);

        if(j==findLenght){
            found1=true;
            //cout<<"\nBurtu savienojums ir atrasts!";
        } else found1=false;//else cout<<"\nBurtu savienojums nav atrasts!";
    } 
    if(found1){
        cout<<"\nBurtu savienojums ir atrasts!";
    } else cout<<"\nBurtu savienojums nav atrasts!";
}

int main(){
    char text[] = "aabacadabbabcd";
    char find[100];

    cout<<"\nDotais burtu savienojums: "<<text;
    cout<<"\nIevadiet burtu savienojumu kuru meklesiet: ";
    cin.getline(find, 100);

    //garums
    int textLenght = strlen(text);
    int findLenght = strlen(find);
    tiesaMeklesana(text, find, textLenght, findLenght);
    return 0;
}