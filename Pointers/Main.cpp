// benjamin.vongtawan@students.aie.edu.au
#include<cstdio>
#include<string>

/*
	A pointer is a variable.
		Follows all the same rules.

	A variable that stores a memory address.
*/

void setInt(int *ptr, int value)
{
	int **pp = &ptr;
	**pp = value;
}

struct MyStructure // 12 bytes
{
	float dinosaur, chicken, monkey;
};

//passing by value
	// Copying data from an argumnent into the parameter
void doSomething(MyStructure d)
{
	
}

// Passing by reference
	// Copying a member address and using that instead
void doSomething(MyStructure *d) //4-bytes
{
	d->chicken = 45;
}

void main()
{
	float myarray[45];

	&(myarray[34]) == myarray;

	float *str_pt = nullptr;

	(*str_ptr).chicken;

	str_ptr->chicken;

	int variable = 0;
	int *ptr = nullptr;
	*ptr = 40;
	ptr = &variable;

	int(ptr != nullptr);
	{
		setInt(ptr, 40);
	}
}