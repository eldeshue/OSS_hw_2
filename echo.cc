// home work of OSS, echo program. 
// return input string, written in C++
#include<iostream>
#include<string>

int main(){
	std::string a;
	std::cout<<"Type a string you want to echoing"<<std::endl;
	std::cin>> a ;
	if(a == "exit"){
		return 0;
	}
	std::cout<< a <<std::endl;
	return 0;
}
