#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *a;
    int n,i=0,v,len;
    a = (char*)malloc(100*sizeof(char));
    printf("Type the message :\n");
    fgets(a,20,stdin);
    printf("Enter shift length: ");
    scanf("%d",&n);
    len = strlen(a);
    printf("1.Encrypt 2.Decrypt\n:");
    scanf("%d",&v);
    switch (v)
    {
        case 1:
                for(char c=a[0];c!='\0';c=a[i])
                {
                    c = (c > 96 && c < 123)?(int) c + n:c;
                    if((int)c > 122)
                        c = ((int)c - 97)%26 + 97;
                        a[i]=c;
                        i++;
                }
                    //printf("%d ",a[0]);
                    printf("%s",a);
                    break;
        case 2:
                for(char c=a[0];c!='\0';c=a[i])
                {
                    c = (c > 96 && c < 123)?(int) c + n:c;
                    if((int)c < 97)
                        c = ((int)c - 97 + 26)%26 + 97;
                        a[i]=c;
                        i++;
                }
                    a[--i]='\0';
                    //printf("%d ",a[0]);
                    printf("%s",a);
                    break;
    }
    //printf("%s",a);
}
