//my_algs.h
#ifndef GUARD_max_main_h
#define GUARD_max_main_h


//�ִ� �Լ�
template<class T>
T max(const T& left, const T& right)
{
	return left > right ?
		left :
		right;
}

//�ּڰ� �Լ�
template<class T>
T min(const T& left, const T& right)
{
	return left < right ?
		 left:
		right;
}

template<class T>
bool equals(const T& left, const T& right)
{

}
#endif // !GUARD_max_main_h
