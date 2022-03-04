// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int subs(int i, vector<int> &arr, int sum, int tsum){
    if(i>=arr.size()){
        // condition satisfied
        if(tsum == sum ){ 
            return 1;
        }
        return 0;
    }
    
    tsum+=arr[i];
    int l = subs(i+1,arr,sum,tsum);
    tsum-=arr[i];
    int r = subs(i+1,arr,sum,tsum);
    return l+r;
}

int main() {
    int sum = 3, tsum=0;
    vector<int> arr = {3,2,1};
    cout<<subs(0,arr, sum, tsum);

    return 0;
}