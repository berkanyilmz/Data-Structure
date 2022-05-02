package linklist;

public class Main {

    public static void main(String[] args) {
	    DoubleLinkList list = new DoubleLinkList();
        for (int i = 0; i < 10; i++)
            list.addTail(new Node(i));

        list.delTail();
        list.showForward();
        System.out.println();
        list.showBackward();
    }
}
