// Date - 12/03/24
// find the pivot integer 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivot(int n){
        int sum = n*(n+1)/2;
        int pivot = sqrt(sum);
        return (pivot*pivot == sum) ? pivot : -1; 
    }

    int pivotBinarySearch(int n){
        int left = 1, right = n;
        int totalSum = n*(n+1)/2;

        // binary search
        while(left < right){
            int mid = (left + right)/2;
            if(mid*mid - totalSum < 0){
                left = mid+1;
            } else {
                right = mid;
            }
        }
        return (left*left == totalSum) ? left : -1;
    }
};

int main (){

    int n = 8;
    Solution solution;
    int ans = solution.pivotBinarySearch(n);
    cout << ans << endl;

    return 0;
}
