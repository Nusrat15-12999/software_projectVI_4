#include<stdio.h>
#include<stdio.h>

int main()
{
     char s[100],result;
     int i,j,v,len,mx=-1,fq[256]={0};

     printf("Enter a string : ");
     gets(s);

    len = strlen(s);
    printf("Duplicate characters:");
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                if (v == 1 && s[j] != '\0') {
                    printf("%c", s[i]);
                }
                s[j] = '\0';
                v++;
            }
        }
        v = 1;
    }


     return 0;


}
