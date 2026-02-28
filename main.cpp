//Basic insertion sort, reversed array, count comparisons and shift
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int index, int &totalComparisons, int&totalShifts) {
    for (int i = index; i < n; i++){
        int checkVal = arr[i];
        int j = i - 1;

        while (j>=0){
            totalComparisons++;
            cout << "Comparison in progress...\n";
            if(arr[j] > checkVal){
                totalShifts++;
                arr[j+1] = arr[j];
                j--;
                cout << "Sucessful shift performed\n";
            } else break;
        }

        arr[j+1] = checkVal;
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int index = 2;
    int totalComparisons = 0;
    int totalShifts = 0;

    insertionSort(arr, n, index, totalComparisons, totalShifts);

    cout << "The total comparisons performed were " << totalComparisons << ", the total shifts performed were " 
        << totalShifts << ". Totalling " << totalComparisons + totalShifts << " operations.";

    //Use below to prove that we would still need 2 more operations if starting at index 2
    cout << "The state of the array is ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}