#include <stdio.h>

int main()
{
    char c;
    printf("enter the letter\n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("vowel",c);
    else
     printf("Consonant",c);
    

    return 0;
}
