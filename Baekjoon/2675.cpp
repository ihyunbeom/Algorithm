/*
����
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� T�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ٽ� �������ڸ�, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ T�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./: �̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 <= T <= 1,000)�� �־�����. �� �׽�Ʈ ���̽���  �ݺ� Ƚ�� R(1 <= R <= 8), 
���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.

���
�� �׽�Ʈ ���̽��� ���� T�� ����Ѵ�.

���� �Է�  
2
3 ABC
5 /HTP
���� ���  
AAABBBCCC
/////HHHHHTTTTTPPPPP
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S[1000];
	int n;
	int r[1000];
	string T;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> r[i] >> S[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < S[i].length();j++)
		{
			for (int k = 0; k < r[i]; k++)
			{
				cout << S[i][j];
			}

		}
		cout << endl;
	}


	return 0;
}
