#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int howManyCollisions(string s){
    // Complete this function
    string temp = s;
    int i, count = 0;
    for(i=0; i<temp.size()-1; i++){
        if(temp[i] == 'r' && temp[i+1] == 'l') {count += 2; temp[i] = 'd'; temp[i+1] = 'd';}
    }
    int first, last;
    first = (int)temp.find('d'); last = (int)temp.rfind('d');
    for(i=0; i<first; i++){
        if(temp[i] == 'r') {count++;}
    }
    for(i=last; i<temp.size(); i++){
        if(temp[i] == 'l') {count++;}
    }
    for(i=first; i<last; i++){
        if(temp[i] != 'd') {count++;}
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // Returns the number of times moving robots collide.
        int result = howManyCollisions(s);
        cout << result << endl;
    }
    return 0;
}

