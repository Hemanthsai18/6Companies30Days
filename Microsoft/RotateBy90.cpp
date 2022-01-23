// { Driver Code Starts
//Initial Template for C



#include<stdio.h>

 // } Driver Code Ends
//User function Template for C


void rotate(int N,int mat[][N])
{
    for (int x = 0; x < N / 2; x++) {
        for (int y = x; y < N - x - 1; y++) {
            int temp = mat[x][y];
            mat[x][y] = mat[y][N - 1 - x];
            mat[y][N - 1 - x]= mat[N - 1 - x][N - 1 - y];
            mat[N - 1 - x][N - 1 - y]
                = mat[N - 1 - y][x];
            mat[N - 1 - y][x] = temp;
        }
    }
    //code here
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t); 
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        rotate(n,a);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}

  // } Driver Code Ends
