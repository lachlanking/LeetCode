class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int max = 0;

        for (int i = 0; i < gain.size(); i++){
            altitude += gain[i];
            if (altitude > max){
                max = altitude;
            }
        }

        return max;
    }
};