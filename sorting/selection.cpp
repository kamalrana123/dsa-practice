#include<bits/stdc++.h>
using namespace std;
void selectionSort(){
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i=0; i<n-1; i++){
        int min_indx=i;
        for(int j=i+1; j<n; j++)
        {
            if(v1[min_indx]>v1[j]){
                min_indx=j;
            }
        }
        swap(v1[min_indx],v1[i]);
    }
    for(int i=0; i<n; i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    selectionSort();
    return 0;
}