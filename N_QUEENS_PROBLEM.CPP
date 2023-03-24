#include<iostream>
using namespace std;
bool isSafeToPut(int board[][100],int i,int j,int n){
	for(int k=0;k<n;k++){
		if(board[k][j]==1 || board[i][k]==1){
			//checking in same column or same row.
			return false;
		}
	}
	//checking for upper right
	int k=i,l=j;
	while(i>=0 && j<n){
		if(board[i][j]==1){
			return false;
		}
		i--,j++;
	}
	//check for upper left
	while(k>=0 && l>=0){
		if(board[k][l]==1){
			return false;
		}
		k--,l--;
	}
	return true;
}
bool NQueen(int board[][100],int i,int n){
	if(i==n){
		//print the board
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				//cout<<board[i][j]<<" ";
				(board[i][j]==1) ? cout<<"Q " :cout<<"_ ";
			}
			cout<<endl;
		}
		//return true;
		cout<<endl;
		return false;
	}
	//recursive case
	for(int j=0;j<n;j++){
		if(isSafeToPut(board,i,j,n)){
			board[i][j]=1;//place the queen on (i,j) if safe.
			bool isremainingsolved=NQueen(board,i+1,n);
			if(isremainingsolved==true){
				return true;
			}
			board[i][j]=0;//else case for backtracking.
		}
	}
	return false;
	//tried for all the columns but did not find any space.
}
int main(){
	int board[100][100]={0};
	int n;
	cin>>n;
	NQueen(board,0,n);
	return 0;
}
