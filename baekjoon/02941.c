#include <stdio.h>

int main(void)
{
    char s[101];
    scanf("%s", s);

    int cnt = 0;
    for (int i=0; s[i]; ++i)
    {
        if (s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) ++i;
        else if (s[i] == 'd')
        {
            if (s[i+1] == '-') ++i;
            else if (s[i+1] == 'z' && s[i+2] == '=') i += 2;
        }
        else if (s[i] == 'l' && s[i+1] == 'j') ++i;
        else if (s[i] == 'n' && s[i+1] == 'j') ++i;
        else if (s[i] == 's' && s[i+1] == '=') ++i;
        else if (s[i] == 'z' && s[i+1] == '=') ++i;

        ++cnt;
    }

    printf("%d\n", cnt);
    return 0;
}
