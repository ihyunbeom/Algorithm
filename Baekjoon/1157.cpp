/*
����
���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

�Է�
ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.

���
ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.

���� �Է�  
Mississipi
���� ���  
?
*/
//97~122
//65~90
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
	int chr[26] = { 0, };
	int max = 0;
	int maxi;
	
	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] >= 65 && S[i] <= 90)
			chr[S[i] - 65]++;
		else
			chr[S[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (chr[i] == max)
		{
			maxi = -1;
		}
		if (chr[i] > max) 
		{
			max = chr[i];
			maxi = i;
		}
	}
	if (maxi == -1)
		printf("?");
	else
		printf("%c", 'A' + maxi);
	return 0;
}