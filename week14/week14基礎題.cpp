//SOIT107_Base_001：基礎題：找零錢    

#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d=50*%d+10*%d+5*%d+1*%d",a,a/50,(a%50)/10,(a%10)/5,a%5);
}

//SOIT107_Base_002：基礎題：計程車資計算    
 
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a<=1500)
    {
        b=100;
    }
    else
    {
        b=100+((a-1500)/250)*5;
        if((a-1500)%250!=0)
        {
            b+=5;
        }
    }
    printf("%d",b);
}

//SOIT107_Base_003：基礎題：計算餘數    
 
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a%b);
}

//SOIT107_Base_004：基礎題：整數轉換等級    
 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90)
    {
        printf("A");
    }
    else if(n>=80)
    {
        printf("B");
    }
    else if(n>=70)
    {
        printf("C");
    }
    else if(n>=60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}

//SOIT107_Base_005：基礎題：計算餘數及列印  

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("The remainder is %d\n",x%y);
}

//SOIT107_Base_006：基礎題：判別正方形 

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Enter two numbers:  ");
    
    if(a==b) printf("It is a square ");
    else printf("It is not a square ");
}

//SOIT107_Base_007：基礎題：分開整數的每個數字   

#include <stdio.h>
int main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    a=n/10000;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=n%10;
    printf("%d   %d   %d   %d   %d",a,b,c,d,e);
}

//SOIT107_Base_008：基礎題：將一連串整數相乘 

#include <stdio.h>
int main()
{
    int n,num,product=1;
    printf("Enter the number of values to be processed: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter a value: ");
        scanf("%d",&num);
        product *=num;
    }
    printf("Product of the %d values is %d",n,product);
}
 
//SOIT107_Base_009：基礎題：我們與惡的距離 

#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    i=a-2;
    if(a-2<0)
    {
        i=-i;
    }
    printf("%d",i);
}
 
//SOIT107_Base_010：基礎題：平年月份的天數  

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int days;
    if(n==2)
    {
        days=28;
    }
    else if(n==4||n==6||n==9||n==11)
    {
        days=30;
    }
    else{days=31;}
    printf("%d",days);
}
 
//SOIT107_Base_011：基礎題：整數二元四則運算  

#include <stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+')
    {
        printf("%d",a+b);
    }
    else if(c=='-')
    {
        printf("%d",a-b);
    }
    else if(c=='*')
    {
        printf("%d",a*b);
    }
    else if(c=='/')
    {
        printf("%d",a/b);
    }
} 

//SOIT107_Base_012：基礎題：字元判別  

#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='A'&&c<='Z')printf("U");
    else if(c>='a'&&c<='z')printf("L");
    else if(c>='0'&&c<='9')printf("D");
    else printf("O");
}
