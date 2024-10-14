#pragma once

class Counter
{
private:
	int count;
public:
	Counter();
	void plusOne();
	void minusOne();
	void showCount() const;
	void newCount(int count);
};