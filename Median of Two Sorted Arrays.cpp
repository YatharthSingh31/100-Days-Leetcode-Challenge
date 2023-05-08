/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        vector <float> z(n+m);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), z.begin());
        int n1=n+m;
        sort(z.begin(), z.end());
        float median;
        int mid = n1/2;
        if(n1%2==0){
            median = (z[mid-1]+z[mid])/2.0;
        }
        else{
            median = z[mid];
        }
        return median;
    }
};
