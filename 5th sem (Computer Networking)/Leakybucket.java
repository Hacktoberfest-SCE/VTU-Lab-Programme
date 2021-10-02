/*
Congestion control using Leaky Bucket
Steps:
1.In regular intervals tokens are thrown into the bucket. ƒ
2.The bucket has a maximum capacity. ƒ
3.If there is a ready packet, a token is removed from the bucket, and the packet is sent.
4.If there is no token in the bucket, the packet cannot be sent
*/
import java.util.Scanner;
public class Leakybucket {
    public static void main(String[] args) {
        int L, r, x1 = 0, x = 0, ta = 0, lct = 0, I = 0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Bucket size ");
        L = in .nextInt();
        System.out.println("Enter the Output rate ");
        r = in .nextInt();
        while (true) {
            System.out.println("Enter time of arrival ");
            ta = in .nextInt();
            if (ta == -1) {
                System.out.println("exit...");
                System.exit(0);
            }
            System.out.println("Enter the packet size ");
            I = in .nextInt();
            if (I > L) {
                System.out.println("Non conformal packet");
                continue;
            } else {
                x1 = x - (ta - lct) * r;
                if (x1 < 0) {
                    x1 = 0;
                    x = x1 + I;
                    lct = ta;
                    System.out.println("Conformal packet");
                    System.out.println("Remaining content of bucket:" + x);
                } else {
                    if (x1 + I <= L) {
                        x = x1 + I;
                        lct = ta;
                        System.out.println("Conformal packet");
                        System.out.println("Remaining content of bucket:" + x);
                    } else
                        System.out.println("Non conformal packet");
                }
            }
        }
    }
}
