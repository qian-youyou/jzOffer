class Solution
{
public:
  //Insert one char from stringstream
    Solution():cur(0){}
    void Insert(char ch)
    {
        str += ch;
        ++mp[ch];
        while(cur < str.size() && mp[str[cur]] > 1){
            ++cur;
        }
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        if(cur >= str.size()){
            return '#';
        }
        return str[cur];
    }
private:
    map<char, int>mp;
    string str;
    int cur;
};
