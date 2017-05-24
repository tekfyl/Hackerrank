#include <bits/stdc++.h>

using namespace std;

long getMaxBridges(long x1, long y1, long x2, long y2, long xC, long yC){
    // Complete this function
    long count=0, x, y;
    x = (abs(xC-x1)<abs(xC-x2)? abs(xC-x1): abs(xC-x2));
    count = count + x;
    y = (abs(yC-y1)<abs(yC-y2)? abs(yC-y1): abs(yC-y2));
    count = count + y;
    count += 2*x*y;
    return count;
}

int main() {
    //  Return the maximum number of bridges the Rulers will commission.
    long x1;
    long y1;
    cin >> x1 >> y1;
    long x2;
    long y2;
    cin >> x2 >> y2;
    long xC;
    long yC;
    cin >> xC >> yC;
    long result = getMaxBridges(x1, y1, x2, y2, xC, yC);
    cout << result << endl;
    return 0;
}
