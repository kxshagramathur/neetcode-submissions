class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i<n-1;i++){
            int max_right = 0;
            for(int j = i+1; j<n; j++){
                if(arr[j]>max_right){
                    max_right= arr[j];
                }
            }
            arr[i]= max_right;
        }
        arr[n-1] = -1;
        return arr;
    }
};