#include <iostream>

using namespace std;

//Selection Sort
int arr[100];
int counter = 0;
int temp;
int _min;
int capacity;

void addData();
void printSortedArr();

int main() {

    addData();

    for(int i = 0; i < capacity; i++){
        _min = arr[i];
        for(int j = i + 1; j < capacity ; j++){
            if(_min > arr[j]){
                _min = arr[j];
                arr[j] = arr[i];
                arr[i] = _min;
            }
        }
    }

    printSortedArr();
    
    return 0;
}

void addData(){
    cout << "Enter the capacity of elements in array : ";
    cin >> capacity;

    for(int i = 0; i < capacity; i++){
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
}

void printSortedArr(){
    for(int i = 0; i < capacity; i++){
        cout << arr[i] << " ";
    }
}
