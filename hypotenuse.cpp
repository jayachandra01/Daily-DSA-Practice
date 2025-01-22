#include<iostream>
#include<cmath>
int main(){
	int a;
	int b;
	int c;
	std::cout<<"Enter side A";
	std::cin>>a;
	std::cout<<"Enter side B";
	std::cin>>b;
	c=sqrt(pow(a,2)+pow(b,2));
	std::cout<<"side C"<<c;
}