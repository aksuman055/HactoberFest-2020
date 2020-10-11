#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
int dir = 0;
int n = 0;
int m = 0;
cin>>n;
cin>>m;
vector<vector<int>>arr(n , vector<int> (m) );
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    cout<<"\n";
}

int x = 0;
int y = 0;
while (true)
{
    dir = (dir+arr[x][y])%4;
    if (dir == 0)
    {
        y++;
        
        if (y == arr[0].size())
        {
            cout<< x <<"," <<(y-1);
            break;
        }
        
    }
    else if (dir == 1)
    {
        x++;
        if (x == arr.size())
        {
            cout<<(x-1)<<","<< y;
            break;
        }
        
    }
    else if (dir == 2)
    {
        y--;
        if (y == -1)
        {
            cout<<x<<","<<y+1;
            break;
        }
        
    }
    else
    {
        x--;
        if (x == -1)
        {
            cout<<x+1<<","<<y;
            break;
        }
        
    }
}


}