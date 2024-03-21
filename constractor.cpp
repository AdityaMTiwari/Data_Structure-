class student{
    int age;

public:
char *name;
student(int age, char *name){
    this->age=age;
    //deep copy
    this->name=new char[strlen(name)+1];
    strcpy(this->name, name);
}
student(student const &s){
    this->age=s.age;
    //deep copy
    this->name=new char[strlen(s.name)+1];
    strcpy(this->name, s.name);
}
void display(){
    cout<<name<<" "<<age<<endl;
}
};