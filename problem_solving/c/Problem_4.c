
#include <stdio.h>
#include <string.h>
void process(char a[])
{
    int i=0,j=0,flag=0;
    int l=strlen(a);
    char b[100]={NULL};
    while(i<l && a[i]!='\0')
    {
        if(a[i]==a[i+1])
        {
            i+=2;
            flag=1;
        }
            else
            {
             b[j]=a[i];
             j++;
             i++; 
           }
         
    }
    if(flag==0 && b[0]!='\0')
      puts(b);
    else if(flag==1 && b[0]!='\0')
     process(b);
    else
      printf("empty string");
}

int main()
{
    char a[100];
    gets(a);
    process(a);
}
