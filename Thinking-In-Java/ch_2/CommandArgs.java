import java.util.*;

class CommandArgs {
    public static void main (String [] args) {
        int len = args.length;
        int i;
        for (i = 0; i < len; i++) {
            System.out.println(args[i]);
        }
    }
}
