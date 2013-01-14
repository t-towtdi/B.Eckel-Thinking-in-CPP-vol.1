#ifndef HEN_H
#define HEN_H
#include <iostream>

class Hen {
public:
	class Nest {
	public:
		class Egg {
			friend class Nest;
			void display();
		};
	
	friend class Hen;
	
	private:
		void display(Hen::Nest::Egg& e);
	};
	
	void display(Hen::Nest& n, Hen::Nest::Egg& e);
	void print();
};

#endif	// HEN_H
