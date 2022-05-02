public class Main {

    public static void insertionSort(int[] arr) {
        int size = arr.length;

        for (int i = 1; i < size; i++) {
            int j = i;
            while (j != 0 && arr[j] < arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }


    public static void main(String[] args) {
	    int[] array = {54, 89, 23, 45, 20, 41, 35, 97, 12, 52, 30, 71};
        insertionSort(array);
        for (int i:array)
            System.out.print(i + " ");
    }
}
