//SOIT107_ADVANCE_005：進階題：字串長度    

#include <stdio.h>
#include <string.h>
 int main()
 {
     char a[100],b[100];
     scanf("%s %s",&a,&b);
     int lena=strlen(a);
     int lenb=strlen(b);
     if(lena>lenb) printf("1");
     else if(lena<lenb) printf("-1");
     else{
         printf("%d",strcmp(a,b));
     }
 }
 
//SOIT107_ADVANCE_006：進階題：除惡務盡    

#include <stdio.h>
int main()
{
    char c[100];
    int i;
    scanf("%s",&c);
    i=0;
    while(c[i]!='\0')
    {
        if(c[i]!='2')
        printf("%c",c[i]);
        i++;
    }
    printf("\n");
}
 
//SOIT107_ADVANCE_007：進階題：擲骰統計    

#include <stdio.h>
int main()
{
    char c[100];
    int i,count[7]={0};
    scanf("%s",&c);
    i=0;
    while(c[i]!='\0')
    {
        count[c[i]-'0']++;
        i++;
    }
    for(i=1;i<=6;i++)
    printf("%d:%d\n",i,count[i]);
}
 
//SOIT107_ADVANCE_008_C_C++：進階題：函數判斷質數  

#include <iostream>
using namespace std;
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0) break;
    }
    if(i==n) return 1;
    else return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}

/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/