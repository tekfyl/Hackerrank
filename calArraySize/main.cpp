#include <bits/stdc++.h>

using namespace std;

int main(){
        int i,n;
        cin >> n;
        int sum = 1;

        for(i=0; i<n; i++){
            int input; cin >> input; sum = sum*input;
        }

        sum = 4*sum/1024;

        cout << sum << endl;

        

    return 0;
}

