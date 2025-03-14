#include<algorithm>
class Solution {
public:
    // int check(int mid1, vector<int>& arr) {
    //     int l = 0, h = arr.size() - 1;
    //     while (l <= h) {
    //         int mid = l + (h - l) / 2;
    //          if (arr[mid] > mid1) {
    //             h = mid - 1;
    //         } else {
    //             l = mid + 1;
    //         }
    //     }
    //     cout<<mid1<<" "<<l<<endl;
    //     return l; 
    // }
    int check(vector<vector<int>>& matrix1, int k){
        int n=matrix1.size();
        int lb=0;
        for(int i=0;i<n;i++){
            int k;
            k= upper_bound(matrix1[i].begin(),matrix1[i].end(),k)-(matrix1[i].begin());
            cout<<k<<" "<<endl;
            lb+=k;
        }
        cout<<lb<<" "<<" "<<k<<endl;
        return lb;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix[0].size();
        int l = matrix[0][0];
        int h = matrix[n - 1][n - 1];
        while (l <= h) {
            int mid = l + (h - l) / 2;
            int count = 0;
            
            count = check(matrix, mid);
            
      
            if(count<k)
              l=mid+1;
            else
              h=mid-1;
        }
        return l;
    }
};