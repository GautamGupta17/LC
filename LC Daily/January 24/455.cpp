// Date - 01/01/24
// Assign Cookies

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int contentChildren = 0;
        int cookieIndex = 0;
        while(cookieIndex < s.size() && contentChildren < g.size()){
            if(s[cookieIndex] >= g[contentChildren]){
                contentChildren++;
            }
        cookieIndex++;
        }
        return contentChildren;
    }
};

int main(){

vector<int> g = {1,9,4};
vector<int> s = {1,8};

Solution solution;
int ans = solution.findContentChildren(g,s);
cout << ans << endl;


return 0;
}