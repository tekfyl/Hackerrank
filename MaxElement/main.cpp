#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    vector<int> v;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int q; cin >> q;
        if(q==1){
            int ele; cin >> ele;
            v.push_back(ele);
        }
        else if(q==2){
            v.pop_back();
        }
        else {
            cout << *max_element(v.begin(), v.end()) << endl;
        }
    }
    return 0;
}


