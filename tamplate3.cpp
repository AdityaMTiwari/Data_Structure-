template <typename T, typename V>
class Pair {
	T x;
	V y;


	public :

	void setX(T x) {
		this -> x = x;
	}

	T getX() {
		return x;
	}

	void setY(V y) {
		this -> y = y;
	}

   V getY() {
		return y;
	}
	
	  
};
#include<iostream>
using namespace std;


  int main(){
/*Pair<int> p1;
	p1.setX(10);
	p1.setY(20);

	cout << p1.getX() << " " << p1.getY() << endl;

	Pair<double> p2;

	p2.setX(100.34);
	p2.setY(34.21);
	cout << p2.getX() << " " << p2.getY() << endl;

	//pair<char> p3;
		
}*/
/*Pair<int ,double> p1;
p1.setX(2003);l
p1.setY(2005);
cout << p1.getX() << " " << p1.getY() << endl;
  }*/
  Pair<int,Pair<double,char>> p2;
  p2.setX(89);
  Pair<double ,char> p4;
  p4.setX(89237.99);
  p4.setY('a');
  p2.setX(p4);
  cout<<p2.getX()<<" "<<p2.getY().getX()<<" "<<p2.getY().getY()<<endl;


  }