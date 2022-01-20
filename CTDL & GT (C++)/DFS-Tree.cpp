#include <bits/stdc++.h>
using namespace std;
 
void addEdge(vector<int> v[],
             int x,
             int y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}
void printPath(vector<int> stack)
{
    int i;
    for (i = 0; i < (int)stack.size() - 1;
         i++) {
        cout << stack[i] << " -> ";
    }
    cout << stack[i];
}
void DFS(vector<int> v[],
         bool vis[],
         int x,
         int y,
         vector<int> stack)
{
    stack.push_back(x);
    if (x == y) {
        printPath(stack);
        return;
    }
    vis[x] = true;
    if (!v[x].empty()) {
        for (int j = 0; j < v[x].size(); j++) {
            if (vis[v[x][j]] == false)
                DFS(v, vis, v[x][j], y, stack);
        }
    }
 
    stack.pop_back();
}
void DFSCall(int x,
             int y,
             vector<int> v[],
             int n,
             vector<int> stack)
{
    bool vis[n + 1];
 
    memset(vis, false, sizeof(vis));

    DFS(v, vis, x, y, stack);
}
int main()
{
    int n = 10;
    vector<int> v[n], stack;
    addEdge(v, 1, 2);
    addEdge(v, 1, 3);
    addEdge(v, 2, 4);
    addEdge(v, 2, 5);
    addEdge(v, 2, 6);
    addEdge(v, 3, 7);
    addEdge(v, 3, 8);
    addEdge(v, 3, 9);
 
    DFSCall(4, 8, v, n, stack);
 
    return 0;
}
