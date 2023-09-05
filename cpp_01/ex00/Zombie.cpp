#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " destroyed!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

// void Zombie::setIndex(int index)
// {
//     this->_index = index;
// }