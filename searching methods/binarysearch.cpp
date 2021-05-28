#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector <int> v;
    for(int i=0;i <n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int to_find;
    cin>>to_find;
    int hi=n-1;
    int low=0;
    while(hi-low>1){
        int mid = low+hi/2;
        if(v[mid]<to_find){
            low = mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[hi]==to_find){
        cout<<hi;
    }
    else if(v[low]==to_find){
        cout<<low;
    }
    else{
        cout<<"Not Found";
    }
}