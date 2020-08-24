#include <iostream>
#include <Windows.h>
#include <cmath> 
#define PI 3.1415


using namespace std;

class Shape{
	float base;
	float height;
	
public:
	Shape (){
		base=0;
		height=0;
	}
  
	
	void set_base(float b ){
		base=b;
	}
	
	
	float  get_base(){
		return base;
		
	}
	void set_height(float a){
		height=a;
	
	}
	
	float get_height(){
		return height;
		
	}	
};

	
	
class ellipse:public Shape{
	public:
	
	void show_area();
	void show_perimetro();
	
	
	
};

class rectangle:public Shape {
	public:
	
	void show_area();
	void show_perimetro();
	
};

class Triangle:public Shape {
	
	public:
	
	void show_area();
	void show_perimetro();
	
};


void ellipse::show_area(){
	
	cout<<" A area da ellipse é: ";
	
	
	cout<< PI*get_base()*get_height() <<endl;
	
	
}

void ellipse::show_perimetro(){
	float c,d,h;
	c=pow(get_base(),2);
	d=pow(get_height(),2);
	h=((c+d)/2);
	
	cout<<" O perimetro do ellipse é: ";
	
	cout<< 2*PI*(sqrt(h))<<endl;

	
}


void Triangle::show_area(){
	cout<<" A area do triangulo é: "<< (( get_height()*get_base())/2)<<endl;
}

void Triangle::show_perimetro(){
	cout<<" O perimetro do triangulo é: "<< (3*get_base())<<endl;
}

void rectangle::show_area(){
	cout<<" A area do retangulo é: " << get_base()*get_height()<<endl;	
}
	
void rectangle::show_perimetro(){
		cout<<" O perimetro do retangulo é: "<<2*get_base()+2*get_height()<<endl;	
	}



int main(){
SetConsoleOutputCP(CP_UTF8);

	Triangle t;
	rectangle r;
	ellipse el;
	
	
	t.set_base(223);
	t.set_height(22);
	t.show_area();
    t.show_perimetro();
 
	r.set_base(22);
	r.set_height(2);
	r.show_area();
    r.show_perimetro();
	
	el.set_base(22);
	el.set_height(2);
	el.show_area();
    el.show_perimetro();


return 0;
}
