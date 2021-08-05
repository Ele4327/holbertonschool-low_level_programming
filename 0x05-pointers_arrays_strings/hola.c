void swap(char *temp0, char *temp1)
{

    int temp = temp0;

    *temp0 = *temp1;
    *temp1 = *temp0;
}
int len(char *s)
{

    char *s;

    while (*s++)
        ;

    return ((--s) - ptrinit);
}

void rev_string(char *s)
{

    char *temp = s + len(s);

    for (; temp != s; s--, temp--)
    {

        swap(s, temp);
    }
}

Hacer el 6 con un for

int tal para for, inializar con 0 para un while;