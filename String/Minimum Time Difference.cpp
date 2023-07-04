// LeetCode -> 539. Minimum Time Difference
// URL -> https://leetcode.com/problems/minimum-time-difference/description/

#include<bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
        //step 1: created a vector in which we converted string hours&Minutes  to        //                minutes interger
        vector<int>minutes;
        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];
            int hours = stoi( curr.substr(0,2) );
            int minat = stoi( curr.substr(3,2) );
            int totalMinutes = hours*60+minat;
            minutes.push_back(totalMinutes);
        }
        //step 2: Sort the minutes array
        sort(minutes.begin(),minutes.end());

        // step 3 : find Minimum Difference
        int mini = INT_MAX;

        for(int i=0; i<minutes.size()-1; i++){
            int diff = minutes[i+1]-minutes[i];
            mini = min(mini,diff);
        }

        // step 4: THE GAME
        int lastDiff = (minutes[0] + 1440)-minutes[minutes.size()-1];
         mini = min(mini,lastDiff);
        
        return mini;
}    

int main()
{
    vector<string> timePoints = {"23:59","00:00"};
    int minDifference = findMinDifference(timePoints);
    cout << "Minimum difference in minutes: " << minDifference << endl;
    
    return 0;
}
