#include <stdio.h>

int main()
{
    char s[100];
    int a=0,b=0;
    printf("Enter a String:");
    fgets(s,sizeof(s),stdin);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='#')
        {
            a++;
        }
        else if(s[i]=='*')
        {
            b++;
        }
    }
    printf("%d",b-a);
    return 0;
}
//2tw+4fw=w
