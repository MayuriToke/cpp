
#include "Product.h"

using namespace std;
Product::Product( int pid,int unit,double price, string pname){
	this->pid=pid;
	this->unit=unit;
	this->price=price;
	this->pname=pname;
}
		void Product::setpid(int piid){
			pid=piid;
		}
		void Product::setunit(int un){
			unit=un;
		}
		void Product::setprice(double pn){
			price=pn;
		}
		void Product::setpname(string nn){
			pname=nn;
		}
		int Product::getunit(){
			return unit;
		}
		double Product::getprice(){
			return price;
		}
		string Product::getpname(){
			return pname;
		}
Product::~Product()
{
}

