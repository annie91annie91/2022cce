//SOIT107_ADVANCE_001_C：進階題：判斷大小    

#include <stdio.h>
int f(int a,int b)
{
    if(a<b) return -1;
    else if(a==b) return 0;
    else return 1;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}


//SOIT107_ADVANCE_002：進階題：陣列全距    

#include <stdio.h>
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<6;i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    printf("%d",max-min);
}

//SOIT107_ADVANCE_003：進階題：計算一列整數的總和    

#include <stdio.h>
int main()
{
    int n=0,sum=0;
    while(n!=999)
    {
        printf("Enter an integer ( 999 to end ): \n");
        scanf("%d",&n);
        sum+=n;
    }
    printf("The total is: %d",sum-999); 
}
 
//SOIT107_ADVANCE_004：進階題：最大公因數gcd  

#include <stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("Enter two integers: \n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    printf("The greatest common divisor of %d and %d is %d\n",a,b,gcd);
}