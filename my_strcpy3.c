#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcpy(char* dest, const char* str)//����const
{
	assert(dest != NULL);
	assert(str != NULL);//���ԣ�����������ʽ���ж�Ϊ�پͻᱨ������ʾ����
	while (*dest++ = *str++)
	{
		;
	}
}
int main()
{
	//strcpy �ַ�������
	char arr1[] = "#######";
	char arr2[] = "love";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}