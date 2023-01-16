#include <bits/stdc++.h>
#include <iostream>
    using namespace std;
    
    int FirstOccurence(int arr[], int low, int high, int x){
        int res1=-1;
        while( low <= high){
            int mid = low + (high-low)/2;
    
            if(arr[mid]==x) {
                res1 =mid;
                high=mid-1;
            }
            else if (arr[mid] < x){
                low = mid+1;
            }
            else {
                high = mid-1;    
            }
        }
        return res1;  // int n = sizeof(arr)/ sizeof(arr[0])
    }
     int LastOccurence(int arr[], int low, int high, int x){
        int res2=-1;
        while( low <= high){
            int mid = low + (high-low)/2;
    
            if(arr[mid]==x) {
                res2 =mid;
                low=mid+1;
            }
            else if (arr[mid] < x){
                low = mid+1;
            }
            else {
                high = mid-1;    
            }
        }
        return res2;  // int n = sizeof(arr)/ sizeof(arr[0])
    }
    


    int main(){
    int arr[] = {2,4,10,10,10,18,20};
    int x =10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result1 = FirstOccurence(arr, 0, n - 1, x);
    int result2 = LastOccurence(arr, 0, n - 1, x);
	(result1 == -1)
		? cout << "Element is not present in array"
		: cout << "First occurence is " << result1 <<endl;
    (result2 == -1)
		? cout << "Element is not present in array"
		: cout << "Last occurence is " << result2<<endl;    
    return 0;
}