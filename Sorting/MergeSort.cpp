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

void merge(int a[], int l, int mid, int h){
	
	int n1 = mid - l + 1;
	int n2 = h - mid;
	int l1[n1], r[n2];
	for(int i = 0; i < n1; i++) l1[i] = a[l + i];
	for(int i = 0; i < n2; i++) r[i] = a[mid + i + 1];
	
	int i = 0; int j = 0; int k = l;
	while(i < n1 && j < n2){
		if(l1[i] < r[j]){
			a[k] = l1[i];
			i++;
			k++;
		}
		else{
			a[k] = r[j];
			j++;
			k++;
		}
	}
	while(i < n1){
		a[k] = l1[i];
		i++;
		k++;
	}
	while(j < n2){
		a[k] = r[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int h){
	
	if(l < h){
		int mid = (l + h) / 2;
		mergeSort(a, l, mid);
		mergeSort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}

int main(){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin>> a[i];
	
	mergeSort(a, 0, n - 1); 
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	
	

	return 0;
}
