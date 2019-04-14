#include <iostream>
using namespace std;

int arr1[100000];

int arr2[100000];

int main() {
	int n;
	int k;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> arr1[i];
	}	
	for(int j = 0; j < k; j++){
		cin >> arr2[j];
	}
	for(int i = 0; i < k; i++) {
		int l = 0;
		int m;
		int r = n - 1;
		while(true){
			m = (l + r) / 2;
			if(arr2[i] < arr1[m]){
				r = m - 1;
			}
			else if(arr2[i] > arr1[m]){
				l = m + 1;				
			}
			else{
				cout << "YES" << endl;
				break;
			}
			if(l>r){
				cout << "NO" << endl;
				break;
			}
		}
	}
	return 0;
}

