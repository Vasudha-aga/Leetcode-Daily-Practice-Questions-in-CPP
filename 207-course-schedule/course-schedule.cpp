class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //build the adj list (vector of vectors is vastly faster than a map)
        vector<vector<int>> adj(numCourses);
        for(const auto& p : prerequisites){
            adj[p[0]].push_back(p[1]);
        }
        //the 3-state array: 0=unvisited , 1=visiting , 2=safe
        vector<int> state(numCourses , 0);
        //run DFS on every single course
        for(int i = 0 ; i<numCourses; i++){
            if(!dfs(i , state, adj)){
                return false;
            }
        }
        return true;
    }
private:
    bool dfs(int course , vector<int> &state , vector<vector<int>>&adj){
        //base cases
        if(state[course] == 2) return true; //safe mode, we already checked this
        if(state[course] == 1) return false;//CYCLE DETECTED! we hit our own active path

        //add to current path
        state[course] = 1;
        //explore all prerequisites
        for(int prereq : adj[course]){
            if(!dfs(prereq , state , adj)){
                return false;
            }
        }
        //remove from path and mark safe(we survived without finding a cycle)
        state[course] = 2;
        return true;
    }
};