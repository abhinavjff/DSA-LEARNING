//GENERAL TEMPLATE
int binarySearchBoundary(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;

    while (l < r) {
        int mid = l + (r - l) / 2;

        if (/* condition that means answer is in right half */) {
            l = mid + 1;   // eliminate left side, mid is not the answer
        } else {
            r = mid;       // keep mid in play, because it might be the answer
        }
    }

    // At this point, l == r -> both point to the boundary/answer
    return l; // or return r (same thing)
}


//FIND MINIMUM IN ROTATED ARRAY 
int findMin(vector<int>& nums) {
    int l = 0, r = nums.size()-1;
    while (l < r) {
        int mid = l + (r-l)/2;
        if (nums[mid] > nums[r]) l = mid+1;
        else r = mid;
    }
    return nums[l];
}


//FIND PEAK ELEMENT
int findPeakElement(vector<int>& nums) {
    int l = 0, r = nums.size()-1;
    while (l < r) {
        int mid = l + (r-l)/2;
        if (nums[mid] < nums[mid+1]) l = mid+1;
        else r = mid;
    }
    return l; // peak index
}


//FIRST BAD VERSION 
int firstBadVersion(int n) {
    int l = 1, r = n;
    while (l < r) {
        int mid = l + (r-l)/2;
        if (isBadVersion(mid)) r = mid;
        else l = mid+1;
    }
    return l; // first bad version
}
