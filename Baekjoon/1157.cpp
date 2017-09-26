/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

예제 입력  
Mississipi
예제 출력  
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