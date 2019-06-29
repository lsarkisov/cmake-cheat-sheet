#include "hello.h"

Hello::Hello(std::string msg) : msg(msg) {}

void Hello::setMsg(std::string msg)
{
    this->msg = msg;
}

std::string Hello::getMsg()
{
    return this->msg;
}