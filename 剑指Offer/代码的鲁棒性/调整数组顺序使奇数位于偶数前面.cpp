class Solution {
public:
    void reOrderArray(vector<int> &array) {
        const int len = array.size();
        int a[len], b[len];
        int aa = 0;
        int bb = 0;
        for(int i = 0; i < len; i++){
            if(array[i]%2){
                a[aa++] = array[i];
            }
            else{
                b[bb++] = array[i];
            }
        }
        for(int i = 0; i < aa; i++){
            array[i] = a[i];
        }
        bb = 0;
        for(int i = aa; i < len; i++){
            array[i] = b[bb++];
        }
    }
};
