#include "student_info.h"
#include "grade.h"
#include <iostream>

using namespace std;

Student_info::Student_info() : midterm(0), final(0) {}

//cin�� �о� Student_info�� �ʱ�ȭ
Student_info::Student_info(istream& is) { read(is);}

bool compare(const Student_info& x, const Student_info& y) {
    return x.getName() < y.getName(); // T / F (A-Z)
}

double Student_info::grade() const{
    return :: grade(midterm, final, homework);
}

istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        // ���� ������ ����
        hw.clear();

        // �Է��� ���� ����
        double x; // cin���� ����ϱ� 

        // �Һ���: ���ݱ��� count�� ������ �Է¹޾�����
        // �Է¹��� ������ ���� sum
        while (in >> x) {
            hw.push_back(x);
        }

        // ���� �л��� ���� �Է� �۾��� ������ ��Ʈ���� ����
        in.clear();


    }
    return in;
}
istream& Student_info::read(istream& in)
{
	//�л��� �̸�, �߰����� ����, �⸻���� ���� �Է�
	in >> name >> midterm >> final;

	//���� ������ �Է�
	read_hw(in, homework);
	return in;
}