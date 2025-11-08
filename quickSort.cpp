 #include <iostream>
#include <cstdlib>
#include <ctime>
#define N 100
using namespace std;


void quickSort(int mas[], int n, int first, int last) {
    if (first >= last) return; 
    int temp;

    int left = first, right = last;
    int pivot = mas[first];

    while (left <= right) {
        while (mas[left] < pivot) left++;
        while (mas[right] > pivot) right--;

        if (left <= right) {
            temp=mas[left];
            mas[left]=mas[right];
            mas[right]=temp;
            left++;
            right--;

            for(int t=0; t<n; t++){
                cout<<mas[t]<<" ";
            }
            cout<<endl;
        }
    }

    if (first < right) quickSort(mas, n, first, right);
    if (left < last) quickSort(mas, n, left, last);
}

int main(){
    int mas[] = {55, 23, 89, 12, 7, 34, 90, 65, 43, 21, 56, 99, 14, 78, 61, 50};
    int n = sizeof(mas)/sizeof(mas[0]);

    cout << "\nMasiva elementi: ";
    for (int i = 0; i < n; i++){
        cout << mas[i] << " ";
    }
    cout << endl;

    int first = 0, last = n - 1;


    quickSort(mas, n, first, last);


    cout << "\nSakartots masivs: ";
    for(int i = 0; i < n; i++){
        cout << mas[i] << " ";
    }
}
