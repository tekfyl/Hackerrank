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

vi v,vis;
int in;
int j;

int dfs(int s, int find_me, vector< vi > g){
        vis[s] = 1;
        int n = g.size();
        if(find_me == s) { return 1; }
        rep(i,n){
            if(vis[g[s][i]] == 0){
                return dfs(g[s][i], find_me, g);
            }
        }
    return 0;
}

vi rev( vi v){
    vi rv; rv = v;
    reverse(all(rv));
    return rv;
}

