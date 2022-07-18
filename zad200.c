/*  Program treba ispisat na kojem mjestu u stringu se prvi put pojavljuje zadano slovo.  */

#include <stdio.h>
#include <string.h>

#define MAX_VELICINA 100


int index(const char * text, const char pronaci);



int main()
{
    char text[MAX_VELICINA];
    char pronaci;
    int mjesto;

    printf("Unesi neki string : ");
    gets(text);
    printf("\nUnesi koji znak da trazi : ");
    pronaci = getchar();

    mjesto = index(text, pronaci);

    if(mjesto == -1)
    {
        printf("\n'%c' nije pronaden.\n", pronaci);
    }
    else
    {
        printf("\nIndex od ['%c'] is [ %d ].\n", pronaci, mjesto);
    }

    return 0;
}



int index(const char * text, const char pronaci)
{
    int index = -1;
    int i, len;

    len = strlen(text);

    for(i=0; i<len; i++)
    {
        if(text[i] == pronaci)
        {
            index = i;
            break;
        }
    }

    return index;
}
