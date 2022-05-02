package datastructure;

public class Main {

    public static void main(String[] args) {
        CircleLinkList list = new CircleLinkList();

        list.addHead(new Node(1));
        list.addTail(new Node(2));
        list.addTail(new Node(3));
        list.addTail(new Node(4));
        list.addTail(new Node(5));
        list.addHead(new Node(0));
        list.add(new Node(8), 3);

        list.showForward();
        System.out.println();
        list.showBackward();
        System.out.println();
        System.out.println("Deleting head");
        list.delHead();
        list.showForward();
        System.out.println();
        list.showBackward();

        System.out.println("Deleting tail");
        list.delTail();
        list.showBackward();
        System.out.println();
        list.showForward();

        System.out.println("Deleting any node");
        list.del(3);
        list.showBackward();
        System.out.println();
        list.showForward();
    }
}
