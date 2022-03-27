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

void swap(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

int par(int a[], int l, int r){
	
	int p = a[r];
	int i = l - 1;
	
	for(int j = l; j < r; j++){
		if(a[j] < p){
			i++;
			swap(a, i, j);
		}
	}
	swap(a, i + 1, r);
	return i + 1;
}

void quickSort(int a[], int l, int r){
	
	if(l < r){
		
		int p = par(a, l, r);
		quickSort(a, l, p - 1);
		quickSort(a, p + 1, r);
	}
}

int main(){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin>> a[i];
	
	quickSort(a, 0, n - 1); 
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	
	

	return 0;
}
