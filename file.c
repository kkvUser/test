#include <stdio.h>
#include <stdlib.h>


typedef struct Person{
	char *name;
	int age;
} Person; 

int Person_setName(Person *person, char *name){
	person -> name = name;
	return 0;
}

int Person_setAge(Person *person, int age){
	person -> age = age;
	return 0;
}

void Person_description(Person *person){
	printf("[Person] %s, %i y.o. \n", person->name, person->age);
}


int main(int argc, char *argv[]){

	printf("dont expect a fancy program here\n");	
	Person *person = (Person *)malloc(sizeof(Person));
	
	Person_setName(person, "Gosho");
	Person_setAge(person, 10);
	Person_description(person);


	return 0;
}
