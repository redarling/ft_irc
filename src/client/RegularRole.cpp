#include "../../include/client/RegularRole.hpp"

RegularRole::RegularRole() {}

RegularRole::RegularRole(const RegularRole& other)
{
    (void)other; // nothing to copy
}

RegularRole&    RegularRole::operator=(const RegularRole& other)
{
    (void)other; // nothing to copy
    return (*this);
}

RegularRole::~RegularRole() {}

void    RegularRole::kick()
{
    // send permission error
}

void    RegularRole::invite()
{
    // send permission error
}

void    RegularRole::topic()
{
    // send permission error
}

void    RegularRole::mode(char arg)
{
    (void)arg;
    // send permission error
}