#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void reversearr(vector<int>&arr){
    int left=0,right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
    int main(){
        vector<int>arr = {1,3,2,4,5};
        reversearr(arr);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    
    return 0;
}