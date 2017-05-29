#include <bits/stdc++.h>

using namespace std;

int main(){
          int n1,n2,n3,h1,h2,h3;
    cin >> n1 >> n2 >> n3;
    vector<int> v1,v2,v3;
    for(int i=0; i<n1; i++){
        int in; cin >> in; v1.push_back(in); 
    }
    for(int i=0; i<n2; i++){
        int in; cin >> in; v2.push_back(in); 
    }
    for(int i=0; i<n3; i++){
        int in; cin >> in; v3.push_back(in); 
    }
    
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());
    h1 = accumulate(v1.begin(), v1.end(), 0);
    h2 = accumulate(v2.begin(), v2.end(), 0);
    h3 = accumulate(v3.begin(), v3.end(), 0);
   while(1){
    if(h1 == h2 && h2 == h3){
        cout << h1; return 0;
    }
    else {
        if(h1>h2){
            if(h1>h3){
                h1 = h1 - v1.back();
                v1.pop_back();
            }
            else {
                h3 = h3 - v3.back();
                v3.pop_back();
            }
        }
        else {
            if(h2>h3){
                h2 = h2 - v2.back();
                v2.pop_back();
            }
            else {
                h3 = h3 - v3.back();
                v3.pop_back();
            }
        }
    }
   }
    return 0;
}

