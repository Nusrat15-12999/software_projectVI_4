#include<stdio.h>
#include<stdio.h>

int main()
{
     char s[100],result;
     int i,j,v,len,mx=-1,fq[256]={0};

     printf("Enter a string : ");
     gets(s);

     ln=strlen(s);

     for(i=0;i<ln;i++)
     {
         fq[s[i]]++;
     }

     for(i=0;i<ln;i++)
     {
         if(mx<fq[s[i]])
         {
             mx=fq[s[i]];
             result=s[i];
         }
     }

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
