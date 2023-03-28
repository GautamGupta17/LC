#include <bits/stdc++.h>
using namespace std;

int stairs(int n){

    if (n==1) return 1;
    if (n==2) return 2;

    int dp[n+1];
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int climbStairs(int n) { // SPACE COMPLEXITY OPTIMIZED

    if (n==1) return 1;
    if (n==2) return 2;


    int prev2 = 1;
    int prev = 1;

    for(int i=2; i<=n; i++){
        int cur_i = prev2+ prev;
        prev2 = prev;
        prev= cur_i;
    }

    return prev;
}

int main(){

int n = 5;
cout << stairs(n);

return 0;
}