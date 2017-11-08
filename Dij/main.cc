#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vvi g(n+1);
        map<ii,int > w; 
        rep1(i,m){
            int v1,v2,k; cin >> v1 >> v2 >> k;
            if(w[mk(v1,v2)] == 0){
                g[v1].pb(v2);
                g[v2].pb(v1);
                w[mk(v1,v2)] = w[mk(v2,v1)] = k;
            }
            else{
                w[mk(v1,v2)] = min( k, w[mk(v1,v2)] );
                w[mk(v2,v1)] = w[mk(v1,v2)];
            }
        }
        vi dis(n+1, INT_MAX), vis(n+1, 0);
        int s; cin >> s;
        priority_queue<ii, vector<ii >, greater<ii > > q;
        dis[s] = 0;
        q.push(mk(dis[s],s));
        while(!q.empty()){
            s = q.top().se;
            q.pop(); vis[s] = 1;
            for(int v:g[s]){
                if(!vis[v]){
                    int cost = dis[s] + w[mk(s,v)];
                    if(dis[v] > cost){
                        dis[v] = cost;
                        q.push(mk(cost,v));
                    }
                }
            }
        }
        for(int i=2; i<=n; i++) cout << (dis[i] == INT_MAX ? -1 : dis[i]) << " ";
        cout << endl;
    }
    return 0;
}
