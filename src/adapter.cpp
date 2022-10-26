#include "adapter.hpp"

Adapter::Adapter(Adaptee *adaptee) : m_adaptee(adaptee){};

Adapter::~Adapter(){};

std::string Adapter::Request() const
{
    std::string to_reverse = this->m_adaptee->SpecificRequest();
    std::reverse(to_reverse.begin(), to_reverse.end());
    return "Adapter: (TRANSLATED) " + to_reverse;
}