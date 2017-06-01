#include <bits/stdc++.h>

using namespace std;

bool is_balanced(string expression) {
    string s = expression;
    vector<char> v;
    int i=0;
    while(i<s.size()){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {v.push_back(s[i]);}
        else if(!v.empty()){
            if(s[i] == ')') {if(v.back() != '(') return 0;}
            else if(s[i] == '}') {if(v.back() != '{') return 0;}
            else {if(v.back() != '[') return 0;}
            v.pop_back();
        }
        else return 0;
        i++;
    }
    return (v.empty() ? 1:0); 
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
