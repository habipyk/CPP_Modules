#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &oth);
    ~Brain();

    Brain &operator=(const Brain &oth);

    const std::string &getIdea(int idx) const;
};

#endif
