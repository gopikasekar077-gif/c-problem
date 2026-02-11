#include <stdio.h>
int main()
 {
    int num=9;
    if(num>=0&&num<=9)
    {
        printf("digit");
    }
    else if(num>='A'&&num<='Z'||num>='a'&&num<='z')
    {
            printf("alphabet");       
    }
    else{
        printf("spcial character");
    }
    
        
    return 0;
}