https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
class Solution
{
    public:
    void deleteMidHelper(stack<int>&st,int count,int &pos){
        if(st.empty()){
            return;
        }
        if(count==pos){
            st.pop();
            return;
        }
        int top=st.top();st.pop();
        deleteMidHelper(st,count+1,pos);
        st.push(top);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int pos=ceil((sizeOfStack+1)/2.0);
        deleteMidHelper(s,1,pos);
    }
};
//https://www.youtube.com/watch?v=ErDgZhJiq0o
