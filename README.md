# SortingAlgoLab
Part 2 of the Sorting Lab 

## Task 1: Average Case Time Complexity Insertion sort
The red value is the value the key is being compared to. Any value to the left of the key, is the already sorted portion of the array.
![ArrayLogicAvgCase](https://github.com/user-attachments/assets/ff14bf35-59fc-4e73-9ef3-b438904ebcb2)

Proof of number of shifts using formula for sum of first n integers:

$$\sum_{i=1}^{n-1} \frac{i}{2}
= \frac{1}{2} \sum_{i=1}^{n-1} i
= \frac{1}{2} \cdot \frac{(n-1)n}{2}
= \frac{n(n-1)}{4}
= \frac{1}{4}n^2 - \frac{1}{4}n.$$

$$O(n^2)$$

## Task 2: Operation Verification of Insertion Sort

Basic insertion sort code with comparison and shift incrementers

```cpp
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
```

## Task 3

Given Code:
```
    function containsX(string) {
        foundX = false;
        for(let i = 0; i < string.length; i++) { 
            if (string[i] === "X") {
                foundX = true; 
            }
        }
        return foundX; 
    }
```
### Part (a): Time Complexity of Code
The following code treats "n" as the string length. There is no exit to the for loop in the case that "X" is found, merely a flag that is marked. Due to this, the function will always perform at a linear speed of O(n), no other operations are formed to increase the time complexity to o(n^2). N operations/checks are performed.  
### Part (b): Modified code for improved Average/Best-Case scenarios
Considering my answer to part a, a best case scenario would be O(1), allowing us to make an exit from the for loop upon identification if the first letter was "X". Our average case would be if "X" was found in the middle of the string, or string.length/2, giving us an n/2 speed, still O(n), but a technically faster operation. 
