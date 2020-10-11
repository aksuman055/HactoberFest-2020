#include <bits/stdc++.h>
#include <vector>
using namespace std;

void floodfill(int arr[][], int row, int col, string ans, bool visited[][])
{
    if (row<0 || col<0 || row == arr[][0].length() || col == arr[0].length() || arr[row][col] == 1 || visited[row][col] == true)
    {
        return;
    }

    if (row == arr[][0].length() -1 && arr[0].length() - 1)
    {
        cout<<ans<<endl;
        return;
    }
    
    
    
    visited[row][col] = true;
    floodfill(arr , row-1 , col , "t" , visited);
    floodfill(arr , row , col-1 , "l" , visited);
    floodfill(arr , row+1 , col , "d" , visited);
    floodfill(arr , row , col+1 , "r" , visited);
    visited[row][col] = false;


}

int main()
{

    int n;
    int m;
    cin >> n;
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }
    bool visited[n][m];
    floodfill(arr, 0, 0, "", visited);
}