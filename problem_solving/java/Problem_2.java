import java.util.*;

class Rotate
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    int size=sc.nextInt();
    int shifts=sc.nextInt();
    int[] arr=new int[size];
    for(int i=0;i<size;++i)
    {
      arr[i]=sc.nextInt();
    }
    for(int i=0;i<shifts;i++)
    {
      int j,firstElement;
      firstElement=arr[0];
      for(j=0;j<arr.length-1;j++)
      {
        arr[j]=arr[j+1];
      }
    arr[j]=firstElement;
    }
    
    for(int i=0;i<size;i++)
    {
      System.out.print(arr[i]+" ");
    }
  }
}
    
    
