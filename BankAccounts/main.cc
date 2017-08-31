#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    while(q--){
        double n,k,x,d,sum=0;
        cin >> n >> k >> x >> d;
        for(int i=0; i<n; i++){
            double in;
            cin >> in;
            sum += max(k, in*x/100);
        }
        if(sum <= d) cout << "fee" << endl;
        else cout << "upfront" << endl;
    }
    return 0;
}


