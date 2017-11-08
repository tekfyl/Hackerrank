#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int check=0;
        while(n--){
            int in; cin >> in;
            if(in < 1) check++; 
        }
        check < k ? cout << "YES" : cout << "NO"; cout << endl;
    }
    return 0;
}


