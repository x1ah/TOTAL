import java.util.*;

public class Storage {
    public static int storage(String s) {
        return s.length() * 2;
    }
    public static void main(String [] args) {
        String str = new String("hello world");
        int l = storage(str);
        System.out.println("Length of 'hello world': ");
        System.out.println(l);
    }
}
