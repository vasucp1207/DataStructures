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

void solve(){
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i < n; i++){
		int j = i;
		while(a[j] < a[j - 1] && j > 0){
			int t = a[j];
			a[j] = a[j - 1];
			a[j - 1] = t;
			j--;
		}
	}
	for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		solve();
	} 
	
	

	return 0;
}
