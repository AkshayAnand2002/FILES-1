https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=0
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
