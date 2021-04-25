#include<stdio.h>
#include<string.h>
#include<assert.h>
char * my_strcpy(char* dest, const char* str)//加上const
{	
	char* ret = dest;
	assert(dest != NULL);
	assert(str != NULL);//断言，如果括号里的式子判断为假就会报错并且提示到行
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy 字符串拷贝
	char arr1[] = "#######";
	char arr2[] = "love";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}