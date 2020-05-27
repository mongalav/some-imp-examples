#include <stdio.h>

int main()
{
    char *s = "monit";
    int i=0;
    while(s[i]!='\0'){
        printf("%c\n",s[i]);
        i++;
    }
    printf("%d",i);

    return 0;
}
