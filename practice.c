#include <stdio.h>
#define EOL '/n'
int main()
{
    char c;
long nc;
nc=0;
while(c!=EOL){
        c = getchar();
        putchar(c);}
/*while(nc<10)
{   
    nc++ ;
    
    printf("%ld \n", nc);
   printf("%c", c);
} */
return 0;
}