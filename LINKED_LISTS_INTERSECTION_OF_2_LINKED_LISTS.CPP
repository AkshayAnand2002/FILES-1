https://www.codingninjas.com/codestudio/problems/intersection-of-linked-list_630457?leftPanelTab=0
#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    unordered_map<Node*,int>mp;
	while(firstHead){
		mp[firstHead]++;
		firstHead=firstHead->next;
	}
	while(secondHead){
		if(mp[secondHead]>0){
			return secondHead->data;
		}
		secondHead=secondHead->next;
	}
	return -1;
}
