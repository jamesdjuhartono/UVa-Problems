import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class P12160 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int cc = 1;
		int s = in.nextInt(), d = in.nextInt(), m = in.nextInt();
		while (s != 0 || d != 0 || m != 0) {
			boolean[] V = new boolean[10000];
			int[] add = new int[m];
			for (int i = 0; i < m; i++)
				add[i] = in.nextInt();
			Queue<Integer> Q = new LinkedList<Integer>();
			V[s] = true;
			Q.add(s);
			Q.add(0);
			boolean found = false;
			while (!Q.isEmpty()) {
				int current = Q.remove();
				int len = Q.remove();
				if (current == d) {
					found = true;
					System.out.printf("Case %d: %d\n", cc++, len);
					break;
				}
				for (int i = 0; i < m; i++) {
					int currentstate = (current + add[i]) % 10000;
					if (!V[currentstate]) {
						Q.add(currentstate);
						Q.add(len + 1);
						V[currentstate] = true;
					}
				}
			}
			if (!found)
				System.out.printf("Case %d: Permanently Locked\n", cc++);
			s = in.nextInt();
			d = in.nextInt();
			m = in.nextInt();
		}
	}
}