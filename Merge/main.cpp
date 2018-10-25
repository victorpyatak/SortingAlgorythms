#include <iostream>

using namespace std;



int main() {

	int arr[] = {5,4,3,2,7,9,0};
	int size_of = sizeof(arr)/sizeof(arr[0]);

	int mid = size_of / 2;
	int evod = size_of % 2;

	int leftLim;
	int rightLim;

	if(evod == 0){
		leftLim = mid;
		rightLim = size_of - leftLim;
	}else{
		leftLim = mid + 1;
		rightLim = size_of - leftLim;
	}

	int left[leftLim];
	int right[rightLim];

	cout << "Left temporary arr :" << endl;
	for(int i = 0; i < leftLim; i++){
		left[i] = arr[i];
		cout << left[i] << " ";
	}


	cout << "\nRight temporary arr :" << endl;
	for(int j = 0; j < rightLim; j++){
		right[j] = arr[j + 1 + mid];
		cout << right[j] << " ";
	}



	return 0;
}
