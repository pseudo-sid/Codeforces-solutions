import java.util.*;
public class Main
    {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int athletes[] = new int[n];
            for(int  i =0 ; i < n; i++)
                athletes[i] = sc.nextInt();
            Arrays.sort(athletes);
            int min_strength = 1000000 + 7;
            for(int i = 1; i < n; i++)
                min_strength = Math.min(athletes[i] - athletes[i-1], min_strength);
            System.out.println(min_strength);
            t--;
        }
        sc.close();
    }
}