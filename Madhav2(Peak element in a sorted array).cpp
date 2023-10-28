class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;

        // Termination condition
        while(start<end){
            int mid=start+(end-start)/2;

            if(arr[mid]>arr[mid+1]){
                // Me B line par hu 
                // Yaa me PEAK par hu
                end=mid;
            }
            else if(arr[mid]<arr[mid+1]){
                // Me A line par hu
                // And PEAK right me exist karta hai
                start=mid+1;
            }
        }

        return start;
        
    }
};
