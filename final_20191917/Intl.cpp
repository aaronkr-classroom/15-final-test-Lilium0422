// Intl.cpp
#include <algorithm>

#include "Intl.h"
#include "Student_info.h"

istream& read_hw(istream& in, vector<double>& hw);

istream& Intl::read(istream& in) {
	Core::read_common(in);
	in >> toeic;
	read_hw(in, Core::homework);
	return in;
}
double Intl::grade() const {
	return min(Core::grade(), toeic);
}