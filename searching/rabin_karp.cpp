#include <iostream>
#include <cstdlib>
using namespace std;

void rabinKarpa(char text[], char find[], int textLength, int findLength, bool &found){
    int code1=0, code2=0;
    int i, j, k, s, m;
    
    

    //kods prieks meklejamas virknes
    for(k=0; k<findLength; k++){
        code2+=find[k];
    }

    //kods prieks dota teksta fragmenta pirmie elementi
    for(j=0; j<findLength; j++){
        code1+=text[j];
    }

    for(i=0; i<textLength-findLength; i++){
        //kods prieks dota teksta fragmenta
        if(code1==code2){
            for(s=0; s<findLength && text[s+i]==find[s]; s++);
            if(s==findLength) found=true;
        }

        if(found) return;
        
        if(i+findLength<textLength){
        code1=code1-text[i]+text[i+findLength];
        }

    }
}
 
int main(){
    char text[] = "Yana Alexeyevna Kudryavtseva is a retired Russian individual rhythmic gymnast. She is the 2016 Olympic All-around silver medalist, three-time World Champion in the All-around (2013–2015), the 2015 European Games All-around champion, two-time (2014, 2016) European Championships All-around champion, the 2012 European Junior ball champion. In national level, she is a two-time (2015, 2014) Russian National All-around champion and three time Russian Junior National all-around champion.";
    char find[100];

    cout << "\nDotais burtu savienojums: " << text;
    cout << "\nIevadiet burtu savienojumu kuru meklesiet: ";
    cin.getline(find, 100);

    //garums
    int textLength = strlen(text);
    int findLength = strlen(find);
    bool found=false;

    rabinKarpa(text, find, textLength, findLength, found);

    if(found){
        cout<<"\nSimbolu virkne ir atrasta!";
    } else cout<<"\nSimbolu virkne nav atrasta!";
    return 0;
}