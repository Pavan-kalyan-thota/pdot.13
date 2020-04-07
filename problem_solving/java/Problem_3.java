package matrix;
import java.util.*;
class Diagonal
{
  public static void main(String[] args)
   {
     Scanner sc=new Scanner(System.in);
     int rows=sc.nextInt();
     int columns=rows;
     int[][] matrix=new int[rows][columns];
     for(int i=0;i<rows;i++)
      {
        for(int j=0;j<columns;j++)
         {
           matrix[i][j]=sc.nextInt();
         }
      }
     int diag1=0;
     for(int i=0,j=0;i<rows && j<columns;i++,j++)
     {
       diag1+=matrix[i][j];
     }
     int diag2=0;
     for(int i=0,j=columns-1;i<rows && j>=0;i++,j--)
     {
        diag2+=matrix[i][j];
     }
      System.out.println(diag1-diag2);
    }
 }
