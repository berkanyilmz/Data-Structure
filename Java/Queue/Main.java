package queue;

public class Main {

    public static void main(String[] args) {
        Queue queue = new Queue();
        queue.add(new Node(1));
        queue.add(new Node(2));
        queue.add(new Node(3));
        queue.add(new Node(4));
        queue.add(new Node(5));

        queue.show();
        System.out.println();

        Node d = queue.del();
        System.out.println("Deleted node : " + d.number);
        queue.show();
    }
}
