import java.util.*;
public class LinearSearch
{
  public static void main(String[]args)
  {
    Scanner in = new Scanner(System.in);
    int l;
    System.out.println("Enter The Length Of The Array: ");
    l = in.nextInt();
    int a[] = new int[l],x,n;
    for(int i=0;i<l;i++)
    {
      System.out.println("Enter The Value For The Index: "+i);
      x=in.nextInt();
      a[i]=x;
    }
    System.out.println("Enter The Number You Want To Search: ");
    n=in.nextInt();
    for(int i=0;i<l;i++)
    {
      if(a[i]==n)
      {
        System.out.println(n+" Found At Index: "+i);
        System.exit(0);
      }
    }
    System.out.println("Not Found");
  }
}
