#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v;
int i,in;

int main(){
    std::ios_base::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> v1,v2;
    rep(i,n){
        cin >> in; v1.push_back(in);
    }
    rep(i,n){
        cin >> in; v2.push_back(in);
    }
    int minv1, minv2, minv11, minv22, d1, d2;
    d1 = distance(v1.begin(), min_element(all(v1)));
    d2 = distance(v2.begin(), min_element(all(v2)));
    minv1 = *min_element(all(v1));
    minv2 = *min_element(all(v2));
    if(d1 != d2){
        cout << minv1+minv2; return 0;
    }
    sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());
    minv11 = v1[1]; minv22 = v2[1];
    cout << min(minv1, minv2) + min(minv11, minv22);
    return 0;
}

