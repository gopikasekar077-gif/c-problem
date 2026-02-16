#include <stdio.h>
int main()
{
    int n,p;
    int result;
    scanf("%d %d",&n,&p);
    for(int i=1;i<p;i++){
        result=n*p;
    }
    printf("%d",result);
    return 0;
}