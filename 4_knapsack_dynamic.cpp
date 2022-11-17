#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int val[N],wt[N];
int dp[N][N];

int knap(int n,int w){
    if(n<=0 ||w<=0){
        return 0;
    }
    if(wt[n-1]>w)
        dp[n][w]= knap(n-1,w);
    else{
        dp[n][w]= max(knap(n-1,w),knap(n-1,w-wt[n-1])+val[n-1]);
    }
    return dp[n][w];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=-1;
        }
    }
    int w;
    cin>>w;
    cout<<knap(n,w)<<endl;;
    
    return 0;
}