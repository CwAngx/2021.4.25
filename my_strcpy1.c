#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcpy(char* dest, char* str)
{

	while (*str!='\0')
	{
		*dest=*str;
		dest++;
		str++;
	}
	*dest = *str;//��ʱ*str��'\0'
}
int main()
{
	//strcpy �ַ�������
	char arr1[] = "#######";
	char arr2[] = "love";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}