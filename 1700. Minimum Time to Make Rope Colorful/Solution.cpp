class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int totaltime = 0;
        int maxtime = neededTime[0];
        for(int i = 1; i < colors.size(); i++){
            if(colors[i] == colors[i-1]){
                totaltime += min(neededTime[i], neededTime[i-1]);
                neededTime[i] = max(neededTime[i], neededTime[i-1]);
            }
        }
        return totaltime;
    }
};