#include <stdio.h>
int main()
{
    char name[25], epro[25], domain[25];
    printf("Enter your email (name@exemple.domain): ");
    scanf("%[^@]", name);
    getchar();
    scanf("%[^.]", epro);
    getchar();
    scanf("%s", domain);
    printf("Your name is %s and your email provider is %s and your domain is .%s\n", name, epro, domain);
}