#include<stdio.h>
int main()
{
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        while(c!='\n')
        {
            if(c=='1'||c=='0'||c=='-')
            printf("%c",c);
            else if(c=='A'||c=='B'||c=='C')
            printf("2");
            else if(c=='D'||c=='E'||c=='F')
            printf("3");
            else if(c=='G'||c=='H'||c=='I')
            printf("4");
            else if(c=='J'||c=='K'||c=='L')
            printf("5");
            else if(c=='M'||c=='N'||c=='O')
            printf("6");
            else if(c=='P'||c=='Q'||c=='R'||c=='S')
            printf("7");
            else if(c=='T'||c=='U'||c=='V')
            printf("8");
            else if(c=='W'||c=='X'||c=='Y'||c=='Z')
            printf("9");
            scanf("%c",&c);
        }
        printf("\n");
    }
    return 0;
}
