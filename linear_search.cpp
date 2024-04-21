#include <iostream>
#include <string>

using namespace std;

int linearSearch(int arr[], int n, int x){
	
	for(int i =0 ; i<n; i++){
		if(arr[i] == x)
			return i ;
	}
	return -1;
}

int main() {
	
	int arr[] = {2,4,5,6,8,9,11,12};
	int x = 11;
	int size = sizeof(arr) / sizeof (arr[0] );

	int result = linearSearch(arr,size, x);
	cout<<result;
}