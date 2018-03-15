class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0) return false;
        for(int i=array.size()-1,j=0;i>=0&&j<array[0].size();)
        {
            if(target==array[i][j]) return true;
            else if(target>array[i][j]) j++;
            else i--;
        }
        return false;
    }
};
