#include <bits/stdc++.h>

using namespace std;


int main() {
   int no, day=0; cin >> no;
    vector<int> p;
    vector<int> n;
    for(int i=0; i<no; i++){
        int in; cin >> in; p.push_back(in);
    }
    while(!p.empty()){
        for(int i=0; i<p.size()-1; i++){
            if(p[i]>=p[i+1]){
                n.push_back(p[i]);
            }
        }
        day++;
        p.clear(); p = n; n.clear();
    }
    cout << day;
    return 0;
}
