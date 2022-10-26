#ifndef __TARGET_H__
#define __TARGET_H__
/**
 * @file target.hpp
 * @author daniel correa
 * @brief
 * @version 0.1
 * @date 2022-10-26
 *
 * @copyright Copyright (c) 2022
 *
 * target interface
 *
 */

#include <string>

class Target
{
private:
    /* data */
public:
    virtual ~Target() = default;

    virtual std::string Request() const;
};

#endif // __TARGET_H__