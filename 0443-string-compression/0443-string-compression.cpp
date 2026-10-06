class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        string res = "";

        while(i<chars.size()){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size()-1 && ch==chars[i+1]){
                count++;
                i++;
            }
            res+=ch;
            if(count!=0) res+=to_string(count+1);
            i++;
        }
        for(int i=0; i<res.size(); i++) chars[i]=res[i];
        return res.size();
    }
};