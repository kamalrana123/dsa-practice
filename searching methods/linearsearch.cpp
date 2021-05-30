#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int search;
    cin>>search;
    for(int i=0; i<n; i++){
        if(v[i]==search){
            cout<<"Found";
            return(0);
        }
    }
    cout<<"not found";
    return 0;
}