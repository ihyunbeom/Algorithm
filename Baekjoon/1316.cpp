/*
����
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, 
�� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. 
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, 
kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, 
aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. 
��°�ٺ��� N���� �ٿ� �ܾ ���´�. 
�ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

���
ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.

���� �Է�  
3
happy
new
year
���� ���  
3
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S[101];
	int N;
	int cnt;

	cin >> N;
	cnt = N;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	for (int i = 0; i < N; i++)
	{
		int chr[26] = { 0, };
		int ch = S[i][0]-'a';
		chr[ch]++;
		for (int j = 1; j < S[i].length(); j++)
		{
			if (ch != (S[i][j] - 'a')) {
				ch = S[i][j] - 'a';
				if (chr[ch] != 0) {
					cnt--;
					break;
				}
				else
					chr[ch]++;
			}
		}
	}
	cout << cnt;

	return 0;
}