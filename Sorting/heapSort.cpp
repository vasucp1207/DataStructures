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

void heapify(int a[], int n, int i){
	
	int lar = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if(l < n && a[l] > a[lar]) lar = l;
	if(r < n && a[r] > a[lar]) lar = r;
	
	if(lar != i){
		swap(a[i], a[lar]);
		heapify(a, n, lar);
	}
}

void buildHeap(int a[], int n){
	// call at starting
	for(int i = n / 2 - 1; i >= 0; i--){
		heapify(a, n, i);
	}
}

void heapSort(int a[], int n){
	
	buildHeap(a, n);
	for(int i = n - 1; i > 0; i--){
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}

int main(){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin>> a[i];
	
	heapSort(a, n); 
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	
	

	return 0;
}
