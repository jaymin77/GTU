// #include <stdio.h>
// #include <time.h>

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && key < arr[j]) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     clock_t t;
//     t = clock();

//     insertionSort(arr, n);

//     t = clock() - t;
//     double time_taken = ((double)t) / CLOCKS_PER_SEC;

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("Time taken: %f seconds\n", time_taken);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
