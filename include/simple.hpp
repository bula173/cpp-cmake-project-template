#ifndef SIMPLE_H
#define SIMPLE_H
#pragma once
	
class Simple  
{
	private:

	public:
		Simple();
		Simple(const Simple&);
		Simple(const Simple&&);
		virtual Simple& operator=(const Simple& t);
		virtual Simple& operator=(const Simple&& t);
		virtual ~Simple();

		int add(int a, int b);

};
#endif