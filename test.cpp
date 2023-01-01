#include <stdio.h>

int main()
{
    char s[10] = {"abccbaacz"};
    char ch_all[26]={0};
    for(int i=0;s[i]!='\0' ;i++)
    {
        if((++ch_all[s[i]-97]) == 2)
        {
            printf("%c",s[i]);
            return 0;
        }
    }
}