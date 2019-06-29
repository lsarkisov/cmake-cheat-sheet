#ifndef HELLO_LIB
#define HELLO_LIB

#include <string>

class Hello {
    public:
        Hello() = delete;
        Hello(std::string msg);
        void setMsg(std::string msg);
        std::string getMsg();
    private:
        std::string msg;
};

#endif

