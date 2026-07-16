class Solution {
public:
    long long gcd(long long a,long long b){

        if(b == 0) return a;

        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        vector<int>arr(n,0);
        long long maxi = nums[0];
        arr[0] = gcd(maxi,nums[0]);

        for(int i=1;i<n;i++){
            maxi = max(maxi,(long long)nums[i]);
            arr[i] = gcd(maxi,nums[i]);
        }
        sort(arr.begin(),arr.end());
        long long ans = 0;
        for(int i=0;i<n/2;i++){
            ans+=gcd(arr[i],arr[n-i-1]);
        }
        return ans;
    }
};