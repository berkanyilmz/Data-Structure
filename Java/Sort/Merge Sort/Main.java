package datastructure;

public class Main {

    public static void mergeSort(int[] arr, int beg, int end) {
        if (beg < end) {
            int mid = (beg + end) / 2;
            mergeSort(arr, beg, mid);
            mergeSort(arr, mid+1, end);
            merge(arr, beg, mid, end);
        }
    }


    public static void merge(int arr[], int beg, int mid, int end) {
        int n1 = mid - beg + 1;
        int n2 = end - mid;

        int L[] = new int[n1];
        int R[] = new int[n2];

        for (int i = 0; i < n1; i++) {
            L[i] = arr[beg+i];
        }
        for (int j = 0; j < n2; j++) {
            R[j] = arr[mid+1+j];
        }

        int i = 0, j = 0, k = beg;
        while (i < n1 && j < n2) {
            if (L[i] < R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k++] = L[i++];
        }
        while (j < n2) {
            arr[k++] = R[j++];
        }
    }


    public static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String[] args) {
	    int[] arr = {5, 4, 3, 2, 1, 0};
        mergeSort(arr, 0, arr.length-1);
        printArray(arr);
    }
}
