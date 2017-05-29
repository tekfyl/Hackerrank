#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string isBalanced(string s) {
    vector<char> st;  
    
    for (auto c: s) {
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push_back(c);
                break;
            case '}':
                if (st.empty() || (st.back() != '{')) {
                    return "NO";
                }
                st.pop_back();
                break;
            case ')':
                if (st.empty() || (st.back() != '(')) {
                    return "NO";
                }
                st.pop_back();
                break;
            case ']':
                if (st.empty() || (st.back() != '[')) {
                    return "NO";
                }
                st.pop_back();
                break;
        }
    }    
    return st.empty() ? "YES" : "NO";
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}
