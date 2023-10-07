/* Lab 1 Notes*/

#include<iostream>

//namespaces must be named and structured like dis
namespace eliAhmed {    //Namesapces are useful because they allow us to have different people on our project, with different values.
	int x = 77;
}

namespace billSmith {
	int x = 86;
} 

int main(void)
{
	std::cout << "Hello Namespaces" << std::endl;

	std::cout << "eli's x: " << eliAhmed::x << std::endl;   //This identifies the variable from our namespace and prints 77 in a pretty way.

	std::cout << "bill's x " << billSmith::x << std::endl;  //This identifies the variable from namespace of billSmith and prints 86 in a pretty way

	return 0;
}                              //And when we run it we get our all three printed: "Hello Namespace", eli's x: 77, and bill's x: 86