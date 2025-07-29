//kdane alog
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int currSum=0,maxSum=INT_MIN;

    for(int val:nums){
        currSum +=val;
        maxSum = max(currSum , maxSum);

        if(currSum < 0){
            currSum=0;
        }
    }
    return maxSum;

}
int main(){
    int  n=6;
    int arr[6]={1,2,3,4,5,6};
    

cout<< " "<<maxSubArray<<endl;
return 0;
}
