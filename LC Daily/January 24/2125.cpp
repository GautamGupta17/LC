// Date - 03/01/24
// Number of Laser Beams in a Bank

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfBeams(vector<string> &bank) {
        int prev =0, ans =0;

        for(string s : bank) 
        {
            int count = 0;
            for( char c : s){
                if(c == '1')
                    count++;
            }
            if (count != 0){
                ans += (prev * count);
                prev = count;
            }
        }
        return ans;
    }
};

int main(){

vector<string> bank = {"011001",
                        "000000",
                        "010100",
                        "001000" };

Solution solution;

int ans = solution.numberOfBeams(bank);
cout << ans << endl;


return 0;
}