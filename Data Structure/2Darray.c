//Multi-dimensional

/*Transpose
Given a 2D array A, your task is to convert all rows to columns and columns to rows.

Input:
First line contains 2 space separated integers, N - total rows, M - total columns.
Each of the next N lines will contain M space separated integers.

Output:
Print M lines each containing N space separated integers.

SAMPLE INPUT 
3 5
13 4 8 14 1
9 6 3 7 21
5 12 17 9 3
SAMPLE OUTPUT 
13 9 5
4 6 12
8 3 17
14 7 9
1 21 3*/

#include <stdio.h>
int N,M;
void transpose(int arr1[][N], int arr2[][M]) 
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            arr2[i][j] = arr1[j][i]; //swaping rows&column of arr1[][]&arr2[][]
}

int main()
{
    scanf("%d",&M); //row
    scanf("%d",&N); //column

    int arr1[M][N]; 
    
    if(1<=M && M<=10 && 1<=N && N<=10){ //constraints
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                scanf("%d", &arr1[i][j]); //input 2-D array arr1[][]
            }
        }
    }
    
    int arr2[N][M], i, j; 
    transpose(arr1, arr2); //calling transpose function
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        printf("%d ", arr2[i][j]); //printing transposed arr2[][]
        printf("\n");
    }
}
