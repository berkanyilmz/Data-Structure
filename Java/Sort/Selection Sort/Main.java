public class Main {

    public static void selectionSort(int[] arr) {
        int len = arr.length;
        int min, index;
        for (int i = 0; i < len-1; i++) {
            min = arr[i];
            index = i;
            for (int j = i+1; j < len; j++) {
                if (arr[j] < min) {
                    min = arr[j];
                    index = j;
                }
            }
            if (i != index) {
                arr[index] = arr[i];
                arr[i] = min;
            }
        }
    }

    public static void main(String[] args) {

        int[] array = {0, 56, 134,45, 87, 23, 76, 12, 67, 3, 65, 133, 75};
        selectionSort(array);
        for (int i: array) {
            System.out.print(i + " ");
        }
    }
}
