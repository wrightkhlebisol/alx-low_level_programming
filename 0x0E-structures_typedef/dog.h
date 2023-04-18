#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - Dog struct
* @name: Dog name
* @age: Dog age
* @owner: Dog owner
*
* Description: Holds data for a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
