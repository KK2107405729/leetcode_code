/*

C语言代码
@ author:kk

*/

char repeatedCharacter(char * s){
    char ch_all[26]={0};
    char ch;
    for(int i=0;s[i]!='\0' ;i++)
    {
        if((++ch_all[s[i]-97]) == 2)
        {
            ch = s[i];
            break;
        }
    }
    return ch;
}