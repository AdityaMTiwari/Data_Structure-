
#include<iostream>
using namespace std;
class vehicle{
    private:
    int maxspeed;
    protected:
    int numtyres;
    public:
    string color;
    vehicle(){
        cout<<"vehicle is default cionstructor"<<endl;
    }
    ~vehicle(){
        cout<<"vehical is destructor"<<endl;
    }
    

};
class car: public vehicle{
    public:
    int numgears;

    car(){
        cout<<"car is default constructor"<<endl;

    }
    ~car(){
        cout<<"car's default destructor"<<endl;
    }
    void print (){
        cout<<"num tyres:"<<numtyres<<endl;
        cout<<"color:"<<color<<endl;
        cout<<"num gears:"<<numgears<<endl;
       // cout<<"max speed:"<<maxspeed<<endl;

    }

};
int main(){
    vehicle v;
    v.color="blue";
  //  v.maxspeed="560";
    //v.numtyres="6";
    car c;
    c.color="black";
  //  c.numtyres=4;
    c.numgears=5;
}

