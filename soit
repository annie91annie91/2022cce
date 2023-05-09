//SOIT106_ADVANCE_007：進階題：迴文判斷 
#include <stdio.h>
int main()
{
    char c1,c2,c3,c4;
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    
    if(c1==c4&&c2==c3)printf("YES\n");
    else printf("NO\n");
}

//SOIT106_ADVANCE_008_C：進階題：絕對值函數
#include <stdio.h>
int f(int n)
{
    if(n<0) return-n;
    else return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}

//SOIT106_ADVANCE_009：進階題：函數反序排列數字
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int ans=0;
    while(n>0)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    printf("%d\n",ans);
}

//SOIT106_ADVANCE_010：進階題：計算陣列的平方值
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        
        printf("%d,",temp*temp); 
    }
    printf("\n");
}

//SOIT106_ADVANCE_011：進階題：2進位轉10進位
#include <stdio.h>
int main()
{
    char c1,c2,c3,c4;
    scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
    
    int ans=0;
    if(c1=='1') ans+=8;
    if(c2=='1') ans+=4;
    if(c3=='1') ans+=2;
    if(c4=='1') ans+=1;
    
    printf("%d\n",ans);
}

//SOIT106_ADVANCE_012：進階題：陣列找出現次數
#include <stdio.h>
int main()
{
    int n=0;
    int a[20];
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            n=i;
            break;
        }
    }
    int ans=0;
    int next;
    scanf("%d",&next);
    for(int i=0;i<n;i++)
    {
        if(a[i]==next) ans++;
    }
    printf("%d\n",ans);
}

