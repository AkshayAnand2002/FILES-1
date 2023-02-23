https://www.codingninjas.com/codestudio/problems/majority-element_842495?leftPanelTab=0
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto i:mp){
		if(i.second > n/2){
			return i.first;
		}
	}
	return -1;
}
