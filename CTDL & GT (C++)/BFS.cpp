#include<iostream>

#include<conio.h>

using namespace std;

#define MAX  100 

#define TRUE 1 

#define FALSE 0 

int G[MAX][MAX], n, chuaxet[MAX], QUEUE[MAX]; 

void Init(){ 

    freopen("dothi.in","r",stdin);
    cin>>n;
    cout<<"So dinh cua do thi n = "<<n<<endl;
    for(int i=1; i<=n;i++){ 
        for(int j=1; j<=n;j++){ 
            cin>>G[i][j];
        }
    } 
    for(int i=1; i<=n;i++){
        chuaxet[i]=TRUE; 
    }
}
/* Breadth First Search */
void BFS(int i){ 
    int u,dauQ, cuoiQ;
    dauQ=1; cuoiQ=1;QUEUE[cuoiQ]=i;chuaxet[i]=FALSE; 
    while(dauQ<=cuoiQ){ 
        u=QUEUE[dauQ];
        cout<<"duyet dinh: "<<u<<endl;
        dauQ=dauQ+1;
        for(int j=1; j<=n;j++){ 
            if(G[u][j]==1 && chuaxet[j] ){ 
                cuoiQ=cuoiQ+1; 
                QUEUE[cuoiQ]=j; 
                chuaxet[j]=FALSE; 
            } 
        } 
    }
}
int main(){ 
    Init(); 
    for(int i=1; i<=n; i++) 
        if (chuaxet[i])
    BFS(i); 
    _getch(); 
}
