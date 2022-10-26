#ifndef __ADAPTER_H__
#define __ADAPTER_H__

/**
 * @brief The adapter makes the adaptee' interface]
 * with the target's interface
 */

#include "adaptee.hpp"
#include "target.hpp"

#include <algorithm>

class Adapter : public Target
{
private:
    /* data */
    Adaptee *m_adaptee;

public:
    Adapter(Adaptee *adaptee);
    virtual ~Adapter();

    std::string Request() const override;
};

#endif // __ADAPTER_H__