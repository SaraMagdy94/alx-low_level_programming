#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
if (d != 0)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}