#include <stdio.h>
void main()
{
    int i,j,k,q,p=0,n,t,m;  
    scanf("%d",&t);
    int b[t][3];
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
     
        for(q=0;q<=n-1;q++)
        {
            l=0;m=q;
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
           l=q;m=0; 
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
        
        while(p<i)
        {
            b[p][0]=trace;
            b[p][1]=rflag;
            b[p][2]=cflag;
            p++;
        }
    }
     for(i=0;i<=t-1;i++)
     {
         printf("case #%d: ",i+1);
         for(j=0;j<3;j++)
         {
             printf("%d ",b[i][j]);
         }
     }
}
