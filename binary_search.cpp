#include <iostream>
#include <string>

using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	

	while(l<=r){
		int mid  = (l+r)/2;
		if(x==arr[mid])
			return mid;
		else if(arr[mid] > x){
			r = mid-1;
		}else if(arr[mid] < x){
			l = mid + 1;
		}
	} 
	return -1;
}

int main() {
	
	int arr[] = {2,4,5,6,8,9,11,12};
	int x = 18;
	int size = sizeof(arr) / sizeof (arr[0] );

	int result = binarySearch(arr , 0, size-1, x);
	cout<<result;
}