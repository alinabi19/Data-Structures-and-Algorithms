#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    int m = 4;
    int n = 4;
    int start_row = 0;
    int start_col = 0;
    int end_row = n - 1;
    int end_col = n - 1;
    int total = m * n;
    int count = 0;

    while (count < total)
    {
        // (I) starting row
        for (int i = start_col; i <= end_col; i++)
        {
            cout << arr[start_row][i] << " ";
            count++;
        }
        start_row++;
        // (II) Ending column
        for (int i = start_row; i <= end_row; i++)
        {
            cout << arr[i][end_col] << " ";
            count++;
        }
        end_col--;
        // (III) Ending row
        for (int i = end_col; i >= start_col; i--)
        {
            cout << arr[end_row][i] << " ";
            count++;
        }
        end_row--;
        // (IV) starting column
        for (int i = end_row; i >= start_row; i--)
        {
            cout << arr[i][start_col] << " ";
            count++;
        }
        start_col++;
    }

    return 0;
}

// // GFG Code
// vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
//     {
//         // code here 
//     vector<int> output;
//     int startRow=0;
//     int endRow=r-1;
//     int startCol=0;
//     int endCol=c-1;
    
//     while(startRow<=endRow){
//     // I
//     for(int i=startCol; i<=endCol; i++){
//         output.push_back(matrix[startRow][i]);
//     }
//     if(startCol>endCol)
//         break;
//     startRow++;
//     // II
//     for(int i=startRow; i<=endRow; i++){
//         output.push_back(matrix[i][endCol]);
//     }
//     if(startRow>endRow)
//         break;
//     endCol--;
    
//     // III
//     for(int i=endCol; i>=startCol; i--){
//         output.push_back(matrix[endRow][i]);
//     }
//     if(startCol>endCol)
//         break;
//     endRow--;
//     // IV
//     for(int i=endRow; i>=startRow; i--){
//         output.push_back(matrix[i][startCol]);
//     }
//     startCol++;
//     }
//     return output;
//     }