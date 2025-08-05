//arr=[1,2,3,4,5]
//->[2,3,4,5]
//for one place

// vector<int> rotateArray(Vector<int>&arr,int n ){
//     int temp=a[0];
//     for(int i=i;i<n;i++){
//         arr[i-1]=arr[i]
//     }
//         arr[n-1]=temp;
//         return arr;
//     }

// for k no of places
// void leftroatate(int arr[],int n,int d){
//     d=d%n;

//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
// }
// better
// void leftrotate(int arr[],int ,int d){
// reverse(arr,arr+d)
// revserse(arr+d,arr+n)
// reverse(arr,arr+n)
// }

void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[end]=temp;
        start++;
        end--;
    }
}