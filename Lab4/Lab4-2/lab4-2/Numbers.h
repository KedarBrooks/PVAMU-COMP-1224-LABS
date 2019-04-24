#ifndef _Numbers_H
#define _Numbers_H
/**
 *Numbers.h
*/
class Numbers {
	int *p;
	int length;
public:
	Numbers(int n);
	int prime_count();
	bool prime_check(int n);
	~Numbers();
};

#endif // !_Numbers_H