//SOIT108_Advance_009：進階題：奇數反流

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]%2==1) printf("%d ",a[i]);
    }
}

//SOIT107_ADVANCE_011：進階題：字串中的數字個數 

#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[81];
    int count=0;
    
    fgets(str,81,stdin);
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

//SOIT107_ADVANCE_010：進階題：判斷迴文 

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 80
int main()
{
    char str[MAX_LENGTH+1];
    int i,j,len;
    
    scanf("%s",str);
    len=strlen(str);
    
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0; 
}

//SOIT108_Advance_008：進階題：10數排序，從大到小排好 

#include <stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}