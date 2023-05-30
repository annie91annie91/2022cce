//SOIT108_Advance_009B：基礎題：大位王 

#include <stdio.h>
int main()
{
    char c;
    while(scanf("%c",&c)==1)
    {
        if(c>='0' &&c<='9')
        {
            printf("%c\n",c);
            break; 
        }
    }
}

//SOIT108_Advance_010：進階題：億萬富翁    

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if((strlen(a)-i)%3==0&&i!=0)
        printf(",");
        printf("%c",a[i]);
    }
}


//SOIT108_Advance_011：進階題：秒數換算  

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%02d:%02d:%02d",n/(60*60),(n/60)%60,n%60);
}
