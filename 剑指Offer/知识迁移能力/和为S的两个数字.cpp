class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int>v;
        int left = 0;
        int right = array.size() - 1;
        while(left < right){
            if(array[left] + array[right] == sum){
                v.push_back(array[left]);
                v.push_back(array[right]);
                break;
            }else if(array[left] + array[right] > sum){
                --right;
            }else{
                ++left;
            }
        }
        return v;
    }
};
