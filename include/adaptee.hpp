#ifndef __ADAPTEE_H__
#define __ADAPTEE_H__

/**
 * @file adaptee.hpp
 * @author Daniel Correa
 * @brief
 * @version 0.1
 * @date 2022-10-26
 *
 * @copyright Copyright (c) 2022
 *
 * Adaptee interface
 *
 */

#include <string>

class Adaptee
{
private:
    /* data */
public:
    std::string SpecificRequest() const;
};

#endif // __ADAPTEE_H__