#include <bits/stdc++.h> //这个题目不可能考，放心这不是我写的，不过不会考的

struct WP
{
    char name[100];
    int a, b, c;
};

int main()
{
    struct WP country[1000];
    struct WP t;
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", country[i].name);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &country[i].a);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &country[i].b);
        country[i].c = country[i].b-country[i].a;
    }
    for(i=0; i<n-1; i++)
    {
       for(j=i; j<n; j++)
        {
            if(country[i].c < country[j].c)
            {
                t = country[i];
                country[i] = country[j];
                country[j] = t;
            }
            if(country[i].c == 0)
            {
                t = country[i];
                country[i] = country[j];
                country[j] = t;
            }
            if(country[i].c == country[j].c && strcmp(country[i].name,country[j].name) > 0)
            {
                t = country[i];
                country[i] = country[j];
                country[j] = t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d %s\n", country[i].c, country[i].name);
    }
}