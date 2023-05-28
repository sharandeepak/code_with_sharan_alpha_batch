#include <iostream>
using namespace std;

/*
1,2,0,2,3,3,3,3,4,5,6,6

*/

int main() {
	int t, size;
	cin>>t;
	while (t--) {
	    cin>>size;
	    int arr[size], count = 0;
	    for (int i=0; i<size; i++) {
	        cin>>arr[i];
	    }  
	    if (size == 1) 
	    {
	        cout<<"output : 1\n";
	        continue;
	    }
	    for (int i=0; i<size; i++) {
	        if(i!=0 && arr[i] == arr[i-1]) {
                count++;
	            arr[i] = 0;
            } 
            if (i!=size-1 && arr[i] == arr[i+1]) {
	            count++;
	            arr[i] = 0;
	        }
	    }
        cout<<"output : "<<size - count<<endl;
	}
	return 0;
}
