#include <stdio.h>
void main()
{
    int i,n,j,leftd=0,rightd=0;     //initialize required variables
    scanf("%d",&n);
    int a[n][n];                   //initialize 2-dimentional array and enter values into it
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=n-1;i++)         //addition for left diagonal nd right diagonal
    {
      leftd+=a[i][i];
      rightd+=a[i][n-i-1];
    }
    }
    printf("%d",abs(leftd-rightd));   //we use abs() fuunction to print absolute value
}    
    
  //note: In the above statement, we use implicit declaration in abs() function which leads a warning and it is negligible.  
