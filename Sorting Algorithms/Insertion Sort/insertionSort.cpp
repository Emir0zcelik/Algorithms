#include <iostream>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertionSort(int arr[], int n){
    
    int key, j;
 
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
        std::cout << "The " << i << ". step." << std::endl;
        printArray(arr , n);
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};

    int N = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The initial look of array" << std::endl;
    printArray(arr, N);
    insertionSort(arr, N);
    std::cout << "The final look of array" << std::endl;
    printArray(arr, N);

}
