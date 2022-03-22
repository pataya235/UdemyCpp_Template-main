#include "Lib.h"

//1.) global static variable
//2.) static variable in a function
//3.) static function

int main()
{
    function();
    function();
    //helper(); static function not available outside Lib
    return 0;
}
