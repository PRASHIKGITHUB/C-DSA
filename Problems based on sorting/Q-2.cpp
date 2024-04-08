#include <iostream>
#include <string.h>
using namespace std;
void selectionSort(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fruit[min_ind], fruit[j]) > 0)
            {
                min_ind = j;
            }
        }
        if (i != min_ind)
        {
            swap(fruit[i], fruit[min_ind]);
        }
    }
    return;
}
int main()
{
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    selectionSort(fruit, n);
    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }

    return 0;
}