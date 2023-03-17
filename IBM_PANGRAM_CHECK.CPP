https://www.interviewbit.com/problems/pangram-check/
#include <unordered_set>
#define ABC_SIZE 26
int Solution::solve(vector<string> &A) {
std::unordered_set<char>letters;
for(auto& str:A){
    //strings in vector
    for(char c:str){
        //character in string
        letters.insert(c);
        //inserted in set.
    }
}
return letters.size()== ABC_SIZE;
}
