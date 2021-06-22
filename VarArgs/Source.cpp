#include <iostream>
#include <cstdarg>

using namespace std;

/* What is Variable Arguments(VarArgs)?
This is a feature used when we dont know how many parameters we need to pass in... Earlier we were using separate functions to pass parameters of the same type but now to solve that problem we use it.

Things to keep in mind:
1. Header include is: #include <cstdarg>
2. needs an array to store the param passed values which is why: va_list
3. needs a starting pointer: va_start
4. Use va_arg macro to access all the items in the list
5. Remember to flush the list in the memory using va_end(list)
6. Most important, when calling the first value is the size of the list which goes as (int a)
*/

int VarArgs(int a, ...)
{
	va_list list;

	int result = 0;

	va_start(list, a);
	for (int i=0; i< a;i++)
	{
		result += va_arg(list, int);
	}

	va_end(list);

	return result;

}
int main()
{
	cout <<"Output: "<< VarArgs(3, 2, 3, 4)<<endl;

	return 0;
}