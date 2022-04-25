#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char s[N];
    int i,n=0,num[26]={0};
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            num[s[i]-97]++;
        else if(s[i]>='A'&&s[i]<='Z')
            num[s[i]-65]++;
    }
    printf("\n");
    for(i=0;i<26;i++)
        if(num[i]!=0)
        {
            printf("'%c':%d\n",i+65,num[i]);
            n++;
            if(n==6)
            {
                n=0;
            }
        }
    printf("\n\n");
    return 0;
}