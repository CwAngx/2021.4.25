#include<stdio.h>
#include<string.h>
#include<assert.h>
char * my_strcpy(char* dest, const char* str)//����const
{	
	char* ret = dest;
	assert(dest != NULL);
	assert(str != NULL);//���ԣ�����������ʽ���ж�Ϊ�پͻᱨ������ʾ����
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	//strcpy �ַ�������
	char arr1[] = "#######";
	char arr2[] = "love";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}