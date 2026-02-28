//Basic insertion sort, reversed array, count comparisons and shift
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int index, int &totalComparisons, int&totalShifts) {
    for (int i = index; i < n; i++){
        int checkVal = arr[i];
        int j = i - 1;

        while (j>=0){
            totalComparisons++;
            cout << "Comparison in progress...";
            if(arr[j] > checkVal){
                totalShifts++;
                arr[j+1] = arr[j];
                j--;
                cout << "Sucessful shift performed";
            } else break;
        }

        arr[j+1] = checkVal;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int index = 1;
    int totalComparisons = 0;
    int totalShifts = 0;

    insertionSort(arr, n, index, totalComparisons, totalShifts);

    cout << "The total comparisons performed were " << totalComparisons << ", the total shifts performed were " 
        << totalShifts << ". Totalling " << totalComparisons + totalShifts << " operations.";
    return 0;
}