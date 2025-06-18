


#include <iostream>
using namespace std;

class person {
    
    private:
    
    string name;
    
    
    public:
    
    void set_name(const string& n){
        name = n;
        
    }
    
    const string get_name()const{
        return name;
    }
    
};

int main()
{
    person my_person;
    my_person.set_name("Tanmay");
    cout << "Your name is " << my_person.get_name();

    return 0;
}
