#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int>& arr, vector<int>& ds){
    if(i == arr.size()){
        for(int x : ds) cout << x << " ";
        cout << endl;
        return;
    }
    
    ds.push_back(arr[i]);
    solve(i+1, arr, ds);
    
    ds.pop_back();
    solve(i+1, arr, ds);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ds;
    solve(0, arr, ds);
}