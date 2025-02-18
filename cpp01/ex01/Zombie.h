#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(void);
        void    setName(std::string name);
        void    announce(void);
        ~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif