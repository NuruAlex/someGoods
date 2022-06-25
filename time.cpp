#include<iostream>
#include<chrono>




class timer 
{
	std::chrono::steady_clock::time_point start, end;
public:
	timer() 
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~timer() 
	{
		end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		std::cout << "\nDuration: " << duration.count() << "s\n";
	}
};
