#include <stdio.h>
void main()
{
    int i,j,k,n,t,m;  
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      scanf("%d",&n);
      int l=0,r=0,c=0,trace=0,rflag=0,cflag=0;
      int a[n][n];
      for(j=0;j<=n-1;j++)
      {
          for(k=0;k<=n-1;k++)
          {
              scanf("%d",&a[j][k]);
          }
         trace+=a[j][j]; 
      }
     
        for(i=0;i<=n-1;i++)
        {
            l=0;m=i;
             for(j=0;j<n-1;j++)
             {
                 for(k=j;k<n-1;k++)
                 {
                     if(a[m][l] == a[m][k+1])
                     {
                         r++; 
                     }
                 }
                 l++;
             }
             if(r!=0)
             {  
                 rflag+=1;
                 r=0;
             }  
           l=i;m=0; 
             for(j=0;j<n-1;j++)
             {
              for(k=j;k<n-1;k++)
               {
                  if(a[m][l] == a[k+1][l])
                  {
                      c+=1;
                  }
               }
               
               m++;
             }
             if(c!=0)
             {
                 cflag+=1;
                 c=0;
             }
        }
        printf("case #%d: %d %d %d \n",i,trace,rflag,cflag);
    }
     
}
