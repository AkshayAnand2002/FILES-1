https://leetcode.com/problems/find-if-path-exists-in-graph/description/
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>umap;
        for(auto x:edges){
            //getting each edge
            vector<int> temp=x;
            //[1,2] u=1,v=2
            int u=temp[0];
            int v=temp[1];
            umap[u].push_back(v);
            umap[v].push_back(u);
            //for bidirectional graph.   
        }
        //int n=umap.size();
        vector<bool>visited(n+1,false);
        queue<int>q;
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int v=q.front();
            q.pop();
            vector<int>temp=umap[v];
            //checking array corresponding to vertex v.
            //we check each vertex in the array.
            for(int i=0;i<temp.size();i++){
                    int vertex=temp[i];
                    if(visited[vertex]==false){
                        q.push(vertex);
                        visited[vertex]=true;
                    }
                }
                if(visited[destination]){
                    return visited[destination];
                }
        }
        return visited[destination];
        //if this is returned true then vertex is visited
        //else vertex is not visited.
    }
};
//https://www.youtube.com/watch?v=QC4bDHEnmLM&list=PLzjZaW71kMwSrxEtvK5uQnfNQ9UjGGzA-&index=6
