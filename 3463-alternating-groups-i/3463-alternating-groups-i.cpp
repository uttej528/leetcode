class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        vector<int> colors1;
        colors1=colors;int alt=0;
        colors1.push_back(colors[0]);
        colors1.push_back(colors[1]);

        

        for(int i=0;i<colors.size();i++)
        {
            if((colors1[i]==0&&colors1[i+1]==1&&colors1[i+2]==0) || (colors1[i]==1&&colors1[i+1]==0&&colors1[i+2]==1))
        {


                alt=alt+1;
        }
        }
        return alt;

    }
};