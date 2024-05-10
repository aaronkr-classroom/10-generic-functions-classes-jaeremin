//new median.h
#ifndef GUARD_median.h
#define GUARD_median.h

#include <algorithm>
#include <vector>
#include <stdexcept>

using namespace std;
template<class T>
T median(vector<T> v)
{
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();
	if (size == 0)
		throw domain_error("median of empty vector!");
	sort(v.begin(), v.end());
	vec_sz mid = size / 2;

	// 과제 점수의 중앙값을 구함
	return size % 2 == 0 ?
		(v[mid] + v[mid - 1] / 2) :
		v[mid];
}
#endif