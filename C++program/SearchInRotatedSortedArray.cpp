#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid=0;
        while(low<=high){
            mid=(low+high)/2;
            
            if(target==nums[mid]) return mid;
            else if(target>nums[mid] || nums[mid]>nums[high] ){
                low=mid+1;
            }
            else high=mid-1;
        }
        return -1;
}

int main(){
    int n,k;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>k;
    cout<<search(arr,k)<<endl;
}
