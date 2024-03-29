//to find the maximum subarray with sum==k and this will not work if there are negative numbers in the array
int l=0;
        int r=0;
        int maxi=0;
        int sum=0;
        while(r<N){
            sum=sum+A[r];
            while(sum>K){
                sum=sum-A[l];
                l++;
            }
            if(sum==K){
                maxi=max(maxi,r-l+1);
            }
            r++;
            
        }
        return maxi;
