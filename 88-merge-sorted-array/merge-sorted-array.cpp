
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mid = 0;

        for (int i = 0; i < n; i++) {
            int pos = mid;

            // Find the correct insertion position
            while (pos < m + i && nums1[pos] <= nums2[i]) {
                pos++;
            }

            // Shift elements to the right
            for (int j = m + i; j > pos; j--) {
                nums1[j] = nums1[j - 1];
            }

            // Insert the element
            nums1[pos] = nums2[i];
            mid = pos;
        }
    }
};

