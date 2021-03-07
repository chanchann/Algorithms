class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2) return findMedianSortedArrays(nums2, nums1);
        int l = 0;
        int r = n1;
        int m1, m2;
        // +1 才是个数，我们这里的k是要拿出来的个数
        const int k = (n1 + n2 + 1) / 2;
        while(l < r) {
            m1 = l + (r - l)/2;
            m2 = k - m1;
            if(nums1[m1] < nums2[m2-1]) {
                l = m1 + 1;
            } else {
                r = m1;
            }
        }
        m1 = l;
        m2 = k - l;
        int c1 = max(m1 <= 0? INT_MIN : nums1[m1-1], 
                    m2 <= 0? INT_MIN : nums2[m2-1]);
        if((n1 + n2) % 2) return c1;
        int c2 = min(m1 >= n1 ? INT_MAX : nums1[m1], 
                    m2 >= n2 ? INT_MAX : nums2[m2]);
        return (c1+c2) / 2.0;
    }
};