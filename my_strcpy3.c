#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcpy(char* dest, const char* str)//加上const
{
	assert(dest != NULL);
	assert(str != NULL);//断言，如果括号里的式子判断为假就会报错并且提示到行
	while (*dest++ = *str++)
	{
		;
	}
}
int main()
{
	//strcpy 字符串拷贝
	char arr1[] = "#######";
	char arr2[] = "love";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}