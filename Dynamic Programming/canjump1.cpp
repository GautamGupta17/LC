#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = nums[n-1];
        for(int i=n-1; i>=0; i--){
            if ( i + nums[i] >= goal )
                goal = i;
        }
        cout << goal; 
        return (goal == 0) ? true : false;

}
int main(){

vector<int> nums = {2,3,1,1,4};
cout << canJump(nums); 

return 0;
}