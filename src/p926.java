import java.util.*;

class Main{
 private static int RE, CE;
 private static boolean[][][] canUse;
 private static long[][] memo;

 public static void main(String[] args){
  Scanner sc = new Scanner(System.in);

  int TC = sc.nextInt();
  while(TC-- > 0){
   int N = sc.nextInt();
   int RS  = sc.nextInt();
   int CS = sc.nextInt();
   RE = sc.nextInt();
   CE = sc.nextInt();
   
   canUse = new boolean[N+1][N+1][2];
   for(int i = 1; i <= N; i++)
    for(int j = 1; j <= N; j++)
     canUse[i][j][0] = canUse[i][j][1] = true;

   int W = sc.nextInt();
   for(int i = 0; i < W; i++){
    int PX = sc.nextInt();
    int PY = sc.nextInt();
    String D = sc.next();

    if(D.equalsIgnoreCase("S"))
     canUse[PX][PY-1][0] = false;
    else if(D.equalsIgnoreCase("W"))
     canUse[PX-1][PY][1] = false;
    else if(D.equalsIgnoreCase("N"))
     canUse[PX][PY][0] = false;
    else if(D.equalsIgnoreCase("E"))
     canUse[PX][PY][1] = false;
   }
   
   memo = new long[N+1][N+1];
   for(int i = 1; i <= N; i++)
    for(int j = 1; j <= N; j++)
     memo[i][j] = -1;

   System.out.println(walk(RS,CS));
  }
 }

 private static long walk(int R, int C){
  if(R == RE && C == CE)
   return 1;
  else if(R > RE || C > CE)
   return 0;
  
  if(memo[R][C] != -1) return memo[R][C];

  long ans = 0;
  if(canUse[R][C][1])
   ans += walk(R+1, C);
  if(canUse[R][C][0])
   ans += walk(R, C+1);

  return memo[R][C] = ans;
 }
}
