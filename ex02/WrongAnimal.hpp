#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
        WrongAnimal(std::string type);
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        ~WrongAnimal(void);
        void makeSound() const;
        std::string getType(void) const;
};

#endif
