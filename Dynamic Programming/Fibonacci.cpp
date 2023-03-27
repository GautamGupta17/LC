#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int Fibonacci_Recursion(int n){

    if (n==0)
        return 0;
    if (n==1)
        return 1;

    else
        return (Fibonacci_Recursion(n-1) + Fibonacci_Recursion(n-2));
}

int Fibonacci_DP(int n){
    if (n==0)
        return 0;
    if (n==1)
        return 1;

    int dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];

}

int main(){


auto start1 = high_resolution_clock::now();
int ans1 = Fibonacci_Recursion(20);
auto stop1 = high_resolution_clock::now();
auto duration1 = duration_cast<microseconds>(stop1 - start1);

cout << "Fib(20) using Recursion "<< ans1 << " and time taken = " << duration1.count() << " microseconds" <<endl;

auto start2 = high_resolution_clock::now();
int ans2 = Fibonacci_DP(20);
auto stop2 = high_resolution_clock::now();
auto duration2 = duration_cast<microseconds>(stop2 - start2);


cout << "Fib(20) using Dynamic Programming " << ans2 << " and time taken = " << duration2.count() << " microseconds" <<endl;

return 0;
}