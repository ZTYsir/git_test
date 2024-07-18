#include<iostream>
#include<string>
#include<memory>
#include<chrono>
#include<thread>

void swap(int& a,int& b){
	int tmp=a;
	a=b;
	b=tmp;
}

int main(){
	std::cout<<"helloo world"<<endl;
	return 0;
}
