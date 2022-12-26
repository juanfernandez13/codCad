#include <iostream>
using namespace std;

void merge(int array[], int inicio, int meio, int final){
    int size = final - inicio;
    int left[size];
    int right[size];

    int i = 0, j = 0;
    for (int k = inicio; k <= final; ++k) {
        if(k <= meio){
            left[i] = array[k];
            i++;
        } else {
            right[j] = array[k];
            j++;
        }
    }

    int sizeL = i;
    int sizeR = j;
    i = 0, j = 0;
    int topArray = inicio;

    while(i < sizeL || j < sizeR){
        if(i >= sizeL){
            array[topArray] = right[j];
            j++; topArray++;
            continue;
        }
        if(j >= sizeR){
            array[topArray] = left[i];
            i++; topArray++;
            continue;
        }
        if(left[i] < right[j]){
            array[topArray] = right[j];
            j++; topArray++;
        } else {
            array[topArray] = left[i];
            i++; topArray++;
        }
    }
}

void mergeSort(int array[], int inicio, int final){
    if(inicio >= final)
        return ;

    int meio = inicio + (final - inicio)/2;
    mergeSort(array, inicio, meio);
    mergeSort(array, meio+1, final);
    merge(array,inicio,meio,final);

}

int main()
{
    int N = 0;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    mergeSort(array,0,N-1);
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }
    return 0;
}