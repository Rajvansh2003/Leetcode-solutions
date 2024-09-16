class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i = 0; i<timePoints.size(); i++){
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0,2));
            int minute = stoi(curr.substr(3,2));
            int totalMinutes = hours * 60 + minute;
            minutes.push_back(totalMinutes);
        }

        sort(minutes.begin(),minutes.end());

        int mini = INT_MAX;
        int n = minutes.size();
        for(int i = 0; i<n-1; i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff);
        }

        int lastDif = (minutes[0] + 1440) - minutes[n-1];
        mini = min(mini,lastDif);
        return mini;
    }
};