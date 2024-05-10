//split.h
#ifndef GUARD_split_h
#define GUARD_split_h

#include <algorithm>
#include <cctype> //isspace
#include <string>

using namespace std;

inline bool space(char c)
{
	return isspace(c);
}

//인수가 공백일때 false, 그렇지 않을 때는 true
inline bool not_space(char c)
{
	return !isspace(c);
}

template <class Out>
void split(const string& str, Out os)
{
	typedef string::const_iterator iter;
	iter i = str.begin();


	while (i != str.end())
	{

		//선행 공백을 무시
		//지금 아이 위치부터
		i = find_if(i, str.end(), not_space);//첫번째 문자 찾기

		//다음 단어의 끝을 찾음
		//while 반복할 때 항상 새로운 반복자 j를 생성
		//지금 i위치부터 첫 번째 띄어쓰기 문자 찾기
		iter j = find_if(i, str.end(), space);

		//[i,j) 범위의 문자를 복사
		if (i != str.end())
		{
			*os++ = string(i, j);
		}

		//i 반복자 위치가 j반복자의 위치를 저장하기
		i = j;
	}
}
#endif
