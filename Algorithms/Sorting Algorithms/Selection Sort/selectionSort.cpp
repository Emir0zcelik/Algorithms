#include <iostream>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void selectionSort(int arr[], int n){

    int min_index;

    for (int i = 0; i < n- 1; i++)
    {
        std::cout << "The " << i + 1 << ". step." << std::endl;
        printArray(arr, n);
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;   
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};

    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The initial look of array" << std::endl;
    printArray(arr, n);
    selectionSort(arr, n);
    std::cout << "The final look of array" << std::endl;
    printArray(arr, n);
}
