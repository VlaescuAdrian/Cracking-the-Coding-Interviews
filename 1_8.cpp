#include <bits/stdc++.h> 
#define N 4 
using namespace std; 


void displayMatrix( 
    int mat[N][N]); 



void zeroMatrix(int mat[][N]) 
{ 
    vector<bool> row(N,false);
    vector<bool> col(N,false);

    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            if (!mat[i][j]) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            if (row[i] == true || col[j] == true) {
                mat[i][j] = 0;
            }
        }
    }

} 
void displayMatrix(int mat[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf("%2d ", mat[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
}

int main() 
{ 
    // Test Case 1 
    int mat[N][N] = { 
        { 1, 2, 3, 4 }, 
        { 5, 0, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 0 } 
    }; 
  

  
    zeroMatrix(mat); 
    displayMatrix(mat); 
  
    return 0; 
} 