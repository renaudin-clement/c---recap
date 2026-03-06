#include <iostream>



int main(int argc, char** argv)
{
allo(); // Error: symbol allo undefined!
return 0;
}


// Declaration et definition d’une fonction allo()
void allo(){
std::cout << "Hello World!" << std::endl;
}
