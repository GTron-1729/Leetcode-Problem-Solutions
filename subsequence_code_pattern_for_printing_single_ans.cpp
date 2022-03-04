// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool subs(int i, vector<int> &arr, vector<int> &res, int sum, int tsum){
    if(i>=arr.size()){
        // condition satisfied
        if(tsum == sum ){ 
            for(auto i: res) cout<<i;
            cout<<"\n";
            return true;
        }
        return false;
    }
    res.push_back(arr[i]);
    tsum+=arr[i];
    if (subs(i+1,arr,res,sum,tsum) == true) return true;
    res.pop_back();
    tsum-=arr[i];
    if (subs(i+1,arr,res,sum,tsum) == true) return true;
    return false;
}

int main() {
    vector<int> res;
    int sum = 3, tsum=0;
    vector<int> arr = {3,2,1};
    subs(0,arr,res, sum, tsum);

    return 0;
}