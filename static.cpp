class student{ 
    private:
   static int totalstudent;
    public:
    
    int age;
    int rolln;
   
    student(){
        totalstudent++;
    }
    int getrolln(){
        return rolln;
    }
    static int gettotalstudent(){
        return totalstudent;
    }

};
 int student::totalstudent=100;