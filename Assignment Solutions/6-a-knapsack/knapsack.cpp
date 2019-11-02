#include <bits/stdc++.h>
using namespace std;


int max(int a, int b) { return (a > b)? a : b; } 

void printknapSack(int W, int wt[], int val[], int n) 
{ 
    int i, w; 
    int K[n + 1][W + 1]; 
  
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max(val[i - 1] +  
                    K[i - 1][w - wt[i - 1]], K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
  
    int res = K[n][W];     
      
    w = W;
    vector<int> ans; 
    for (i = n; i > 0 && res > 0; i--) { 
          
        if (res == K[i - 1][w])  
            continue;         
        else { 
            ans.push_back(i ); 
               
            res = res - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    }
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    } 
    cout<<endl;
} 

int main() {
    int n, W;
    cin >> n >> W;
    int w[n],v[n];
    for (int i = 0; i < n; ++i)
        cin >> w[i] >> v[i];

      printknapSack(W, w, v, n);

    return 0;
}
