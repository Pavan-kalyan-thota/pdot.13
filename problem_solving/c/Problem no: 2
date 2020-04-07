#include <stdio.h>
void main()
{
    int i,n,d,temp,j=0;       //n is the size of array,d is the no of left rotations;i,j,temp are temporary variables
    scanf("%d %d",&n,&d);
    int a[n];                 //declaration of array with n size elements
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=d-1;i++)
    {
        j=0;
        temp=a[j];
        while(j<=n-2)         //we can also use while loop for left rotations which is more efficient than 'for' loop
        {
         a[j]=a[j+1];
         j++;
        }
        a[n-1]=temp;
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
}
