// #include <bits/stdc++.h>
// using namespace std;

// void moveZeroToEnd(vector<int>& arr, int n) {
//     vector<int> temp;

//     // Store all non-zero elements in temp
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             temp.push_back(arr[i]);
//         }
//     }

//     int nz = temp.size(); // Count of non-zero elements

//     // Copy non-zero elements back to arr
//     for (int i = 0; i < nz; i++) {
//         arr[i] = temp[i];
//     }

//     // Fill remaining positions with 0
//     for (int i = nz; i < n; i++) {
//         arr[i] = 0;
//     }
// }

// int main() {
//     vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
//     int n = arr.size();

//     moveZeroToEnd(arr, n);

//     // Print the modified array
//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }
//optimized

int j=-1;
for(int i=0;i<n;i++){
    ifa[i]==0
{
    j=i;
    break;
}
}
if(j==-1)return a;

for(int i =j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
    return a;
}