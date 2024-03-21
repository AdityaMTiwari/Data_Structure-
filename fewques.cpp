class student{
    public:
    int age;
    int const rollnumber;
    int &x;
                     //inslisation
    student(int r,int age) : rollnumber(r),age(age), x(this->age){
        //rollnumber=r;
    }

    
};