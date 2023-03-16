https://www.codingninjas.com/codestudio/problems/k-largest-element_1062624?leftPanelTab=0
#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    sort(a.begin(),a.end());
    vector<int>answer;
    for(int i=n-k;i<=a.size()-1;i++){
        answer.push_back(a[i]);
    }
    return answer;
}
