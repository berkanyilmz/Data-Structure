public class Main {

    public static void bubbleSort(int[] array) {
        int size = array.length;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - 1; j++) {
                if (array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] array = {34, 56, 13, 97, 35, 0, 12, 78, 95, 72};
        bubbleSort(array);

        for (int i: array)
            System.out.print(i + " ");
    }
}
