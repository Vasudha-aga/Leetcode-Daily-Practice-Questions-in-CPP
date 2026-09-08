class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(const auto& p : prerequisites){
            adj[p[0]].push_back(p[1]);
        }
        vector<int> state(numCourses , 0);
        for(int i = 0 ; i<numCourses; i++){
            if(!dfs(i , state, adj)){
                return false;
            }
        }
        return true;
    }
private:
    bool dfs(int course , vector<int> &state , vector<vector<int>>&adj){
        if(state[course] == 2) return true;
        if(state[course] == 1) return false;
        state[course] = 1;
        for(int prereq : adj[course]){
            if(!dfs(prereq , state , adj)){
                return false;
            }
        }
        state[course] = 2;
        return true;
    }
};