public class Main {

    public static int binarySearch(int[] arr, int val) {
        int size = arr.length;
        int beg = 0;
        int end = size - 1;
        int mid = (beg+end)/2;

        while (beg <= end) {
            if (arr[mid] == val) {
                return mid;
            }
            else if (val < arr[mid]) {
                end = mid - 1;
            }
            else {
                beg = mid + 1;
            }
            mid = (beg+end) / 2;
        }
        return -1;
    }

    public static int binarySearchRecursive(int[] arr, int beg, int mid, int end, int val) {
        if (beg <= end) {
            if (arr[mid] == val) {
                return mid;
            }
            else if (val < arr[mid]) {
                end = mid-1;
            }
            else {
                beg = mid + 1;
            }
            mid = (beg + end) / 2;
            return binarySearchRecursive(arr, beg, mid, end, val);
        }
            return -1;
    }

    public static void main(String[] args) {
        int arr[] = new int[15];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = i*2;
        }


        int index = binarySearch(arr, 16);
        System.out.println("index : " + index);


        int mid = arr.length / 2;
        index = binarySearchRecursive(arr, 0, mid, arr.length-1, 20);
        System.out.println("index : " + index);
    }
}