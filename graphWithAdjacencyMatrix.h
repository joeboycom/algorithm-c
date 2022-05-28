//
// Created by Joe Wu on 2022/5/28.
//

void doGraphWithAdjacencyMatrix()
{
    // n is the number of vertices
    // m is the number of edges
    int n, m;
    printf("input the number of vertices: \n");
    scanf("%d", &n);

    printf("input the number of edges: \n");
    scanf("%d", &m);

    int adjMat[n + 1][n + 1];
    for(int i = 0; i < m; i++){
        int u , v ;
        printf("input vertex u: \n");
        scanf("%d", &u);

        printf("input vertex v: \n");
        scanf("%d", &v);
        adjMat[u][v] = 1 ;
        adjMat[v][u] = 1 ;
    }
}