#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        v.push_back({s,e});
    }

    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });


    int take = 1;
    int end = v[0][1];


    for(int i=0;i<n;i++){
        if(v[i][0] >= end){
            take++;
            end = v[i][1];
        }
    }

    cout<< take<<endl;

    return 0;
}