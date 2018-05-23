#include <stdio.h>
#include<string.h>

int main(void)
{
     int i, j = 0, k = 0, x, len;
     char a[100], b[100][200], temp;
     scanf("%[^\n]s", str);
     for (i = 0;a[i] != '\0'; i++)
     {
        if (a[i] == ' ')
        {
            b[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            b[k][j]=str[i];
            j++;
        }
    }
    b[k][j] = '\0';
    for (i = 0;i <= k;i++)
    {
        len = strlen(str1[i]);
        for (j = 0, x = len - 1;j < x;j++,x--)
        {
            temp = b[i][j];
            b[i][j] = b[i][x];
            b[i][x] = temp;
        }
    }
    for (i = 0;i <= k;i++)
    {
        printf("%s ",b[i]);
    }

	return 0;
}
