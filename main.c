#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("donne a :\n");
    scanf("%d",&a);

    printf("donne b :\n");
    scanf("%d",&b);
    d=a*b;
    c=a;
    while(b!=0)
    {

    if(b%2!=0){
       b--;
    c=d-a*b;
    printf("= %d * %d + %d\n",a,b,c);
    }
    else{
       a*=2;
       b/=2;
       printf("= %d * %d + %d\n",a,b,c);
    }
    }
    printf("=%d",c);
    return 0;
}
