package list;

public class Main {

    public static void main(String[] args) {
        List list = new List();
        list.addTail(new Node(2));
        list.addTail(new Node(3));
        list.addTail(new Node(5));
        list.addHead(new Node(1));
        list.add(new Node(4), 3);
        list.show();
        System.out.println();
        list.del(3);
        list.show();
    }

}
