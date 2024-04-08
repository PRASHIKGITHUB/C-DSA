/*Given on n*m matrix 'a' return all elements of the matrix in spiral order*/
#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;
    int direction = 0;
    while (((left <= right) && (top <= bottom)))
    {
        // left---->right
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
        }

        // top----->bottom
        else if (direction == 1)
        {
            for (int j = top; j <= bottom; j++)
            {
                cout << arr[j][right] << " ";
            }
            right--;
        }

        // right----->left
        else if (direction == 2)
        {
            for (int k = right; k >= left; k--)
            {
                cout << arr[bottom][k] << " ";
            }
            bottom--;
        }

        // bottom---->top;
        else
        {
            for (int k = bottom; k >= top; k--)
            {
                cout << arr[k][left] << " ";
            }
            left++;
        }
        direction++;
        direction = direction % 4;
    }

    return 0;
}