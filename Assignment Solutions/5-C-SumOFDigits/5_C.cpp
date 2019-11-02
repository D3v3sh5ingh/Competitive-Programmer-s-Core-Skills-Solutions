#include<bits/stdc++.h> 
using namespace std; 
long long int dp[101][501]; 
unsigned long long int countsol(int n, int sum) 
{ 
	if (n == 0) 
	return sum == 0; 

	if (dp[n][sum] != -1) 
	return dp[n][sum]; 

	unsigned long long int ans = 0; 
	for (int i=0; i<10; i++) 
	if (sum-i >= 0) 
		ans += countsol(n-1, sum-i); 

	return dp[n][sum] = ans; 
} 

int main() 
{ 
	int n , sum ;
	cin>>sum>>n;
	if(sum==0){
		cout<<1<<endl;
	} 
	else{
    memset(dp, -1, sizeof dp);
	cout << countsol(n, sum)- countsol(n-1,sum);
	} 
	return 0; 
} 
