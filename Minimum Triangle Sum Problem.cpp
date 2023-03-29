#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int minimumTotal(vector<vector<int>>& triangle)
    {
    int n=triangle.size();

    vector<int> result(n,0);

    for(int i=0; i<n;i++)
    {
        result[i]=triangle[n-1][i];
    }
        for(int i =n-2; i>=0; i --)
        {
            for(int j=0;j<triangle[i].size();j++)
                {
                    result[j]= min(result[j],result[j+1])+triangle[i][j];
                }
        }
    return result[0];
}

int main()
{
    int a;
    cin >> a;
vector<vector<int> > triangle;
    for(int i =0; i<=a; i++)
        {
        vector <int> nums;
        string bufferr;
        getline(cin, bufferr);
        stringstream ss(bufferr);
        int j;
            while(ss >> j)
                {
                    nums.push_back(j);
                
                    if(ss.peek() == ',')
                    ss.ignore();    
                } 
        triangle.push_back(nums);
        }
cout<<minimumTotal(triangle);
    return 0;
}
