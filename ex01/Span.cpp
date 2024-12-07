#include "Span.hpp"

Span::Span()
	: _N(0), _vec()
{
}
Span::Span(uint N)
	: _N(N), _vec()
{
}
Span::Span(const Span &src)
	: _N(src._N), _vec(src._vec)
{
}
Span::~Span()
{
}
Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_N = src._N;
		_vec = src._vec;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_vec.size() < _N )
		_vec.push_back(n);
	else
		throw std::out_of_range("No space left in class!");
}

int Span::shortestSpan(void)
{
	if (_vec.size() < 2)
		throw std::invalid_argument("there are too less elements in container!");std::vector<int> copy(_vec);
	std::sort(copy.begin(), copy.end());
	int min = std::abs(copy.at(1) - copy.at(0)); 
	for (size_t i = 1; i < _vec.size() - 1; i++)
	{
		int tmp = std::abs(copy.at(i + 1) - copy.at(i));
		if (tmp < min)
			min = tmp;
	}
	return (min);
}
int Span::longestSpan(void)
{
	if (_vec.size() < 2)
		throw std::invalid_argument("there are too less elements in container!");
	return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}