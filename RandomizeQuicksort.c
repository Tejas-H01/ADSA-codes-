#include <stdio.h>
#include <stdlib.h>  // needed for rand()

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int lo, int hi) {
    int i = lo - 1;
    int j;
    int pivot = arr[hi];  // pivot is always the last element
    for (j = lo; j < hi; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, hi);
    return i + 1;
}

// 🔹 RANDOMIZED PIVOT VERSION 🔹
int randompivot(int arr[], int lo, int hi) {

    // 🔸 Unlike normal quick sort (which always picks the last element as pivot),
    // here we pick a random index between lo and hi.
    int pi = lo + rand() % (hi - lo + 1);

    // 🔸 Swap that random element with the last element (hi)
    // so the partition() function can treat it as the pivot.
    swap(arr, pi, hi);

    // 🔸 Now call the regular partition function.
    // The rest of the logic remains the same as normal quick sort.
    return partition(arr, lo, hi);
}

void RandomQuickSort(int arr[], int lo, int hi) {

    if (lo < hi) {
        // 🔸 Instead of calling partition() directly,
        // we call randompivot() to randomize pivot selection.
        int pi = randompivot(arr, lo, hi);

        RandomQuickSort(arr, lo, pi - 1);
        RandomQuickSort(arr, pi + 1, hi);
    }
}

int main(void) {

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call randomized version of quick sort
    RandomQuickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("|%d", arr[i]);
    }
    printf("|");

    return 0;
}
