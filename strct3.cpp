#include<stdio.h>
#include<string.h>
struct person{
	char name[50];
	int salary;
	int age;
	
};
int main()
{
	struct person person1,person2;
	strcpy(person1.name,"aakash");
	person1.salary=60060;
	person1.age=21;
	strcpy(person2.name,"garvit");
	person2.salary=600600;
	person2.age=31;
	printf("%s\n",person1.name);
	printf("%d\n",person1.salary);
	printf("%d\n",person1.age);
	return 0;
	
}
