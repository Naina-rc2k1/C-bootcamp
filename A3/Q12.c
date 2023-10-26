#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
     printf("%c is an uppercase leter\n",ch);

    if(ch>='a' && ch<='z')
     printf("%c is a lowercase leter\n",ch);

}