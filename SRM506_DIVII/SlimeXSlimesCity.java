import java.util.*;
public class SlimeXSlimesCity {
   public int merge(int[] p) {
      Arrays.sort(p, 0, p.length);
      int N = p.length;
      long sum = 0;
 
      for(int i = 0; i < p.length; i++) {
          sum = 0;
          for(int j = 0; j <= i; j++)
            sum += p[j];
          for(int j = i + 1; j < p.length; j++) {
              if (sum >= p[j])
                sum += p[j];
              else {
                N--;
                break;
              }
          }
       }
      return N;
   } 
}
