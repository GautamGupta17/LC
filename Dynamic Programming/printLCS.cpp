#include <bits/stdc++.h>
using namespace std;

string LCS(string x, string y, int n, int m){

    int dp[n+1][m+1];
    // base case for recursion = for initialisation of dp - matrix
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(x[i-1] == y[j-1]) // when last char is same
                dp[i][j] = 1 + dp[i-1][j-1];
            else // if last char is not same, pick max
                dp[i][j] = max( dp[i][j-1] , dp[i-1][j]);
        }
    }

    int i = n, j = m;
	string lcs = "";
	while (i > 0 && j > 0) {
		if (x[i - 1] == y[j - 1]) {
			lcs += x[i - 1];
			i--, j--;
		}
		else {
			if (dp[i][j - 1] > dp[i - 1][j])
				j--;
			else
				i--;
		}
	}
	reverse(lcs.begin(), lcs.end());

	return lcs;
}


int main(){

string x,y;

x = "TAFKHAIPNGEL";
y = "GETSFHMNRWE";


int n = x.length(), m = y.length();

string ans = LCS(x,y,n,m);

cout << "Length of Longest Common Subsequence = " << ans.length() << " and LCS is " << ans <<endl;


return 0;
}
