https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0
#include <bits/stdc++.h>
void reverse(string &str,int i,int j){
	//base case
	if(i>j){
		return ;
	}
	swap(str[i],str[j]);
	i++;
	j--;
	reverse(str,i,j);
	//recursive call till i>j is not reached.
}
string reverseString(string str)
{
	reverse(str,0,str.length()-1);
	return str;
}
