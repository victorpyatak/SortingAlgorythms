#include <iostream>

using namespace std;

void addData();
void bubbleSort();
void printSortedArr();

int arr[100];
int capacity,
    temp;

int main(int argc, char const *argv[]) {

    addData();
    bubbleSort();
    printSortedArr();

    return 0;
}

void addData(){
    cout << "Enter number of elements in array : ";
    cin >> capacity;

    for(int i =0; i < capacity; i++){
        cout << "Array element " << i + 1 << " : ";
        cin >> arr[i];
    }
}

void bubbleSort(){
    for(int i = 0; i < capacity ; i++){
        for(int j = 1; j < capacity ; j++){
            temp = arr[j];
            if(arr[j-1]> arr[j]){
                arr[j] = arr[j - 1];
                arr[j-1] = temp;
            }
        }
    }
}

void printSortedArr(){
    for(int i = 0; i < capacity; i++){
        cout << arr[i] << " ";
    }
}
