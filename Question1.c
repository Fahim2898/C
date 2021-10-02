#include <stdio.h>
#include <limits.h>
#define V 9
int minj(int j[], bool mstSet[])
{

    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && j[v] < min)
            min = j[v], min_index = v;

    return min_index;
}

int print(int parent[], int gp[V][V])
{
    printf("Edge \t Weight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i, gp[i][parent[i]]);
}

void MM(int gp[V][V])
{

    int parent[V] ,j[V];

    bool mstSet[V];


    for (int i = 0; i < V; i++)
        j[i] = INT_MAX, mstSet[i] = false;


    j[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) {
        int u = minj(j, mstSet);

        mstSet[u] = true;

        for (int v = 0; v < V; v++)


            if (gp[u][v] && mstSet[v] == false && gp[u][v] < j[v])
                parent[v] = u, j[v] = gp[u][v];
    }

    print(parent, gp);
}

int main()              //0  1   2  3  4  5  6  7  8
{
    int gp[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0  },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0 ,0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0},
                        { 0, 0, 0, 0, 0, 2, 0 , 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0 ,7 },
                        { 0, 0, 2, 0, 0, 0 , 6, 7, 0 }
                        };
    MM(gp);
    return 0;
}
