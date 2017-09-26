﻿/*
문제
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 다음과 같이 변경해서 입력했다.

크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
ñ	d-
lj	lj
nj	nj
š	s=
ž	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다.

단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

입력
첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

문제 설명에 나와있는 크로아티아 알파벳만 주어진다.

출력
입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

예제 입력  
ljes=njak
예제 출력  
6
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
	int cnt = 0;
	int pos;
	string chr[8] = { "c=","c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int tmp[8] = { 2,2,3,2,2,2,2,2 };
	int len;
	cin >> S;
	
	len = S.length();
	for (int i = 0; i < 8; i++) {
		while ((pos = S.find(chr[i])) != string::npos)
		{
			S.replace(pos, tmp[i], "*");
			cnt++;
			len-=tmp[i];
		}
	}
	
	cout <<cnt+len;

	return 0;
}