#include<bits/stdc++.h>
using namespace std;
void BFS(int g[][7],int start,int n)
{
    int i=start;
    queue<int> q;
    int visit[7]={0};

    cout<<i;
    visit[i];
    visit[i]=1;
    q.push(i);
    while(!q.empty())
    {
        i=q.front();
        q.pop();
        for(int j=1;j<n;j++)
        {
            if(g[i][j]==1 && visit[j]==0)
            {
                cout<<j;
                visit[j]=1;
                q.push(j);
            }
        }
    }
}
int main()
{
 int G[7][7]={{0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};
 BFS(G,1,7);
 
 return 0;
}
