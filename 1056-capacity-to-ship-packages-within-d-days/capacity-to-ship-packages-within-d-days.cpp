class Solution {
public:
    
    bool canShip(vector<int>& weights, int days, int capacity) {
        int currentWeight = 0;
        int requiredDays = 1;

        for (int weight : weights) {
            if (currentWeight + weight <= capacity) {
                currentWeight += weight;
            }
            else {
                requiredDays++;
                currentWeight = weight;
            }
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};