https://www.codingninjas.com/codestudio/problems/sum-of-even-odd_1115708?leftPanelTab=0
#include <iostream>
using namespace std;
int countn(long long n){
    // if(n==0){
    //     return 1;
    // }
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
    }
    return count;
}
int main() {
    //Write your code here
    int no,odd=0,even=0;
    cin>>no;
    int count=countn(no);
    for(int i=0;i<=count;i++){
        int digit=no%10;
        no=no/10;
        if(digit%2==0){
            even+=digit;
        }
        else{
            odd+=digit;
        }
    }
    cout<<even<<" "<<odd;
    return 0;
}
