class Solution {
public:
      int peak(vector<vector<int>>& mat,int row,int column,int mid){
            int maxi=INT_MIN;
            int index= -1;
            for(int i=0;i<row;i++){
                if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                index = i;
                }
            }
            return index;
        }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int column=mat[0].size();
        int low=0;
        int high=column-1;
        while(low<=high){
            int mid=(low+high)/2;
           int max_index = peak(mat,row,column,mid);
           int left_adj=(mid>0) ? mat[max_index][mid-1] : -1;
           int right_adj= (mid<column-1) ? mat[max_index][mid+1] : -1;
           if(mat[max_index][mid]>left_adj and mat[max_index][mid]>right_adj){
            return {max_index,mid};
           }
           else if(mat[max_index][mid]<left_adj and mat[max_index][mid]>right_adj){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }

    return {-1,-1};
        
    }
};