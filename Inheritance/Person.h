#include <string>

class Person{
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

public:
    Person(std::string first, std::string last, int arbitrary);
    Person();
    ~Person();
    std::string getName() const;
    int getNumber() const {return arbitrarynumber;}
    void SetNumber(int number) { arbitrarynumber = number;}

    bool operator<(Person const&p) const;
    bool operator<(int i) const;
};

bool operator<(int i, Person const& p);