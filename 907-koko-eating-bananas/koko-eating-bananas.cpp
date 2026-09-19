class Solution {
public:
long long sum_hours(vector<int> &nums,int mid){
        long long total_hours=0;
        for(int i=0;i<=nums.size()-1;i++){
        total_hours+=(nums[i]+mid-1)/mid;
    }
        return total_hours;
 }
    long long minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
    int maxi=INT_MIN;
    for(int i=0;i<=piles.size()-1;i++){
        maxi=max(maxi,piles[i]);
    }
    long long high=maxi;
    while(low<=high){
        long long mid=(low+high)/2;
        long long total_hours=sum_hours(piles,mid);
        if(total_hours<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        return low;
        
    }
};