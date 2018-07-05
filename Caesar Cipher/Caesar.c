#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getdat(char *a, int *n)
{
    int len;
    printf("Type the message :\n");
    fgets(a,20,stdin);
    len=strlen(a);
    printf("Enter shift length: ");
    scanf("%d",n);
    getchar(); //to clear stdin cache
    return len;
}

int main()
{
    char *a;
    int n,i=0,v,len;
    a = (char*)malloc(100*sizeof(char));
    while(3)
    {
    printf("1.Encrypt 2.Decrypt 3.Exit\n:");
    scanf("%d",&v);
    getchar();
    switch (v)
    {
        case 1:
                len = getdat(a,&n);
                for(char c=a[0],i=0;c!='\0';c=a[i])
                {
                    c = (c > 96 && c < 123)?(int) c + n:c;
                    if((int)c > 122)
                        c = ((int)c - 97)%26 + 97;
                    a[i]=c;
                    i++;
                }
                a[len-1]='\0';
                printf("%s\n",a);
                break;
        case 2:
                len = getdat(a,&n);
                for(char c=a[0],i=0;c!='\0';c=a[i])
                {
                    c = (c > 96 && c < 123)?(int) c - n:c;
                    if((int)c < 97)
                        c = ((int)c - 97 + 26)%26 + 97;
                    a[i]=c;
                    i++;
                }
                a[len-1]='\0';
                printf("%s\n",a);
                break;
        case 3:
                exit(0);
                break;
        default:
                printf("Select a valid choice \n");
    }
    }
}
