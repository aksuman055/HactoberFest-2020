#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    int n;
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        cout<<"\n";
        st.push(i);
    }

    while (st.size() > 2)
    {
        int num1 = st.top();
        st.pop();
        int num2 = st.top();
        st.pop();
        if (arr[num2][num1] == 1)
        {
            st.push(num1);
        }else
        {
            st.push(num2);
        }
    }

    for (int i = 0; i < n; i++)
    {
     if (i != st.top())
     {
        
        if (arr[st.top()][i] == 0 || arr[i][st.top()] == 1)
        {
            cout<<st.top();
        }
     }
     
        
    }

    

}
