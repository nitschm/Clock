#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

/*
Matthew Nitsch - Intro to Data Structures: Practice 2
*/

class clockType
{
private:
	int hr;
	int min;
	int sec;
public:
	void setTime(int h, int m, int s);
	void setH(int h);
	void setM(int m);
	void setS(int s);
	int getH() { return hr; } //inline function
	int getM() { return min; } //inline function
	int getS() { return sec; } //inline function
	void getTime(int& h, int& m, int& s);
	void printTime() const;
	void incrementH();
	void incrementM();
	void incrementS();
	bool equalTime(const clockType& otherOb) const;
	clockType(int, int, int);
	clockType();
	~clockType();
};

#endif //CLOCKTYPE_h