/* Example of _lsearch */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

char *animals[10] =
{
	   "Horse",
	      "Dog",
		     "Cat",
			    "Goat",
				   "Peacock"
};

size_t elems = 5;

int compare(char **x, char **y)
{
	 return strcmp(*x, *y);
}

int addelem(char *key)
{
	 size_t num = elems;

	  lsearch(&key, animals, &num,
			      sizeof(char *),
				      (int (*)(const void *, const void *))compare);
	   return (elems == num);
}

void main()
{
	 char *key = "Donkey";

	  if (addelem(key))
		      printf("Animal \"%s\" already exists in array\n",
					             key);
	   else
		       printf("\"%s\" added to animals array\n",
					              key);
}
