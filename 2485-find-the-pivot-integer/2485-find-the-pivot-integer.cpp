class Solution {
public:
    int pivotInteger(int n) {
        int index;
        int totalSum=0;
        int currentSum=0;
        totalSum=n*(n+1)/2;
        for(int i=1;i<=n;i++)
            {
                
                currentSum+=i;
                totalSum-=i;
                if(totalSum==(currentSum-i))
                {
                     index =i;
                        break;
                }
            else
                {
                index=-1;
            }
            
            }
        return index; 
    }      
};