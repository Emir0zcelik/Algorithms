#include <iostream>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(int arr[], int n){
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                std::cout << "The " << count++ << ". step." << std::endl;
                printArray(arr , n);
            }            
        }        
    }    
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "The initial look of array" << std::endl;
    printArray(arr, n);
    bubbleSort(arr, n);
    std::cout << "The final look of array" << std::endl;
    printArray(arr, n);

}
