#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int y = array.size();
        int x = array[0].size();
        int j = x - 1;
        int i = 0;
        while(j >=0 && i < y){
            if(array[i][j] == target){
                return true;
            }
            while(j >= 0 && array[i][j] > target){
                j--;
            }
            while(i < y && array[i][j] < target){
                i++;
            }
        }
        return false;
    }
};
