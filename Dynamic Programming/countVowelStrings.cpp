#include <bits/stdc++.h>
using namespace std;

    void countVowelStrings(int n) {
        
        int dp[n+1][5];

        for(int i=0; i<5; i++){
            dp[0][i] = 0;
            dp[1][i] = 1; 
        }

        for(int i=2; i<=n; i++){
            dp[i][0] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
            dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
            dp[i][2] = dp[i-1][2] + dp[i-1][3] + dp[i-1][4];
            dp[i][3] = dp[i-1][3] + dp[i-1][4];
            dp[i][4] = dp[i-1][4];
        }
    

        for(int i=0; i<=n; i++){
            for(int j=0;j<5; j++ )
                cout << dp[i][j] << " ";
            cout <<endl;
        }
        int sum = dp[n][0] + dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4];
        cout << sum <<endl;

    }

int main(){

countVowelStrings(33); 

return 0;
}