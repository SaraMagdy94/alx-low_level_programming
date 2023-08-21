#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
srand(time(NULL));

char password[65];
int i;

for (i = 0; i < 64; i++)
{
int random_choice = rand() % 3;
if (random_choice == 0)
password[i] = 'A' + rand() % 26;
else if (random_choice == 1)
password[i] = 'a' + rand() % 26;
else
password[i] = '0' + rand() % 10;
}

password[64] = '\0';

printf("%s\n", password);

return 0;
}