#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int g; cin >> g;
    for(int i=0; i<g; i++){
        int score=0, count=0, n, m;
        long long x;
        vector<int> a, b;
        cin >> n >> m >> x;
        for(int j=0; j<n; j++){
            int in; cin >> in; a.push_back(in);
        }
        for(int j=0; j<m; j++){
            int in; cin >> in; b.push_back(in);
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        while(!a.empty() && !b.empty() && count <= x){
            if(a.back() < b.back()){
                count += a.back();
                a.pop_back();
                if(count > x) break;
                score++;
            }
            else{
                count += b.back();
                b.pop_back();
                if(count > x) break;
                score++;
            }
        }
        
        while(!a.empty() && count <= x){
            count += a.back();
                a.pop_back();
                if(count > x) break;
                score++;
        }
        
        while(!b.empty() && count <= x){
                count += b.back();
                b.pop_back();
                if(count > x) break;
                score++;
        }
        cout << score << endl;
    }
    return 0;
}
