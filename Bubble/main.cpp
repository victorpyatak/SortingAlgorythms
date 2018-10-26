#include <iostream>

using namespace std;

int askArrLen();
void addData(int a[] , int s);
void sortArr(int ar[] , int sz);


int main() {

    int arr[] = {};
    int elem = askArrLen();
    addData(arr,elem);
    sortArr(arr,elem);

    return 0;
}


int askArrLen(){
    int elements;
    cout << "Enter number of the elements : ";
    cin >> elements;
    return elements;
}

void addData(int a[] , int s){
    for(int i = 0; i < s; i++){
        cout << "Element " << i + 1 << " : ";
        cin >> a[i];
        }
}

void printArray(int ar[] , int sz){
    for(int i = 0; i < sz; i++){
        cout << ar[i] << endl;
    }
}

void sortArr(int ar[] , int sz){
    int temp;
    for(int i = 0; i < sz; i++){
        for(int j = 1; j < sz; j++){
            temp = ar[j];
            if(ar[j - 1] > ar[j]){
                ar[j] = ar[j - 1];
                ar[j - 1] = temp;
            }
        }
    }
    for(int i = 0; i < sz; i++){
        cout << ar[i] << endl;
    }
}
