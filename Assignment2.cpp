//'DSA assignment - In-place and Out-place sorting algorithm'
// Submitted By - Prem Shankar. SID = 21104084. Branch = EE.

//Q1. Inplace Sorting Algorithm uses constant space for producing the output. It sorts the list only by modifying the order of the elements within the list.The extra space(if required) usually ranges from the order of 1 to logn whereas outplace sorting algorithm uses extra space for its operation which exceeds the (1-logn) range. 

// Q2. Outplace Insertion Sort Algorithm 

 #include <bits/stdc++.h>
 using namespace std;

// // created an extra array.

void insertionSort(int arr[],int arr2[], int n,int m){
    
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i - 1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
        int k = 0;
        arr2[k] = key;
        k++;
    }
}
    void printArray(int arr2[], int m){
        for (int i = 0; i < m; i++){
            cout << arr2[i] << " ";        
        }        
    }

    int main(){
    int arr[] = { 13, 10, 12, 8, 9 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int arr2[5] = {};
 
    insertionSort(arr,arr2,N,5);
    printArray(arr, N);
 
    return 0;
}

// Q2. Inplace Insertion Sort Algorithm

void insertionSort2 (int arr[],int n ){
    for(int i = 0; i<n; i++){
        int key = arr[i];
        int j = i - 1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
    void printArray(int arr[], int n){
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";        
        }        
    }

    int main(){
        int arr[] = {5,7,2,9,11};
        int N2 = sizeof(arr)/sizeof(arr[0]);
        insertionSort2(arr,N2);
        printArray(arr,N2);
    }


// Q3. Practical applications of inplace and outplace sorting algorithms
   // Inplace techniques are useful to sort the lists containing limited amount of data in an efficient and space optimised manner. 
   // Outplace techniques are useful when we have large amount of data such that we need to store the immediate results. Here extra space requirement is necessary.




    
        
