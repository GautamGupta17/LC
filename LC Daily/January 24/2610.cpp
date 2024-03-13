// Date - 01/01/24
// Assign Cookies

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> findContentChildren(vector<int>& nums) {

        vector<int> freq(nums.size() + 1);

        vector<vector<int>> ans;
        for(int c : nums){
            if(freq[c] >= ans.size()){
                ans.push_back({});
            }
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        return ans;
    }
};

int main(){

vector<int> nums = {1,3,4,1,2,3,1};

Solution solution;
vector<vector<int>> ans = solution.findContentChildren(nums);
for(auto it : ans){
    for(auto itr : it){
        cout << itr << " ";
    }
    cout << endl;
}


return 0;
}