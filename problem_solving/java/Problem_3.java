import java.util.Scanner;

public class DiagonalDifference 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        long sumLeftRight = 0;
        long sumRightLeft = 0;
        for(int i = 0; i < n; i++)
        {
            String[] elements = sc.nextLine().split(" ");
            sumLeftRight += Long.parseLong(elements[i]);
            sumRightLeft += Long.parseLong(elements[n - i - 1]);
        }
        System.out.println(Math.abs(sumLeftRight - sumRightLeft));
        sc.close();
    }
}
