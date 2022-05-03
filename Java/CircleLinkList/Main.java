package datastructure;

public class Main {

    public static void main(String[] args) {
        CircleLinkList list = new CircleLinkList();

        list.add(new Node(1));
        list.add(new Node(2));
        list.add(new Node(3));
        list.add(new Node(4));
        list.add(new Node(5));
        list.add(new Node(0));
        list.add(new Node(8));

        list.showForward();
        System.out.println();
        list.showBackward();
        System.out.println();
        System.out.println("Deleting head");
        list.del();
        list.showForward();
        System.out.println();
        list.showBackward();

        System.out.println("Deleting tail");
        list.del();
        list.showBackward();
        System.out.println();
        list.showForward();

        System.out.println("Deleting any node");
        list.del();
        list.showBackward();
        System.out.println();
        list.showForward();
    }
}
