class student{
    public:

    int age;
    private:
    int roll_no;
    public:
    student(int r){
        cout<<"constructor 1 called"<<endl;
        roll_no=r;
    }
    student(int a, int r){
        cout<<"constructor 2 called"<<endl;
        age = a;
        roll_no=r;
            }
    void display(){
        cout<<"age:"<<age<<endl<<"roll_no:"<<roll_no<<endl;    }

};
