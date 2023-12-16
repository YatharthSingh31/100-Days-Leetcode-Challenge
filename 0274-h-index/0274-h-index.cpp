class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());

        // Iterate through the sorted array to find the H-Index
        int hIndex = 0;
        for (int i = 0; i < citations.size(); ++i) {
            if (citations[i] >= i + 1) {
                hIndex = i + 1;
            } else {
                break;  // Stop when the condition is no longer met
            }
        }

        return hIndex;
    }
};