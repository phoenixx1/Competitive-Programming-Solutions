//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int low, int high, int key){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]<key){
            low=mid+1;  
        }else if(a[mid]>key){
            high=mid-1;
        }else{
            return mid;
        }
   }
   return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int q, x;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> x;
        cout << binarySearch(arr, 0, n-1, x)+1 << endl;
    }
    return 0;
}