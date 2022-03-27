#include<bits/stdc++.h>

// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

#define lb lower_bound
#define ub upper_bound
#define ll long long
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define popcount(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()

using namespace std;

void dfs(vector<int> g[], int s, vector<int> &visit){
	
	visit[s] = 1;
	cout << s << " ";
	for(int x: g[s]){
		if(!visit[x]){
			dfs(g, x, visit);
		}
	}
}

int main(){
	
	int n, m;
	cin >> n >> m;
	vector<int> g[n];
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	vector<int> visit(n);
	for(int i = 0; i < n; i++) visit[i] = 0;
	dfs(g, 0, visit);
	
	

	return 0;
}
