#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the N Number: ";
    cin>>n;

    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int w;

    cout<<"Enter the weight";
    cin>>w;
    int ans=0;
    for(int i=0;i<n;i++){
        if(w>=a[i].second){
            ans = ans + a[i].first;
            w=w-a[i].second;
            continue;
        }
        int r=a[i].first/a[i].second;
        ans = ans + r*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
}