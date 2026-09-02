class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) { //O(n) , O(1)
        int totalgas = 0, totalcost =0;
        for(int i =0 ; i<gas.size() ; i++){
            totalgas += gas[i];
            totalcost += cost[i]; //total gas required
        }
        //if totalgas = totalcost --> it is possible to traverse the circular route
        if(totalgas < totalcost) return -1; //no matter from where you start the total amount of gas you collect around the entire circle is less than the total gas required --> no starting point

        //if totalgas >= totalcost then the problem gaurantees a solution ie some valid starting station exists
        int currgas = 0; //amount of gas we currently have
        int start =0; //lets try start as station 1 ie idx 0
        for(int i =0 ; i<gas.size() ; i++){
            currgas += gas[i] - cost[i]; //gas gained - gas spent should be positive to start the travel
            if(currgas < 0){
                currgas = 0;
                start = i+1;
            }
        }
        return start;
    }
};