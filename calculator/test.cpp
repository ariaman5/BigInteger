#include "operation.h"
#include "biginteger.h"
#include<iostream>
int main(int argc, char *argv[])
{
   // operation op("3", "5", OP::MUL);
/*    big_integer a("1322");
    big_integer b("232");
    */
    
    operation op = operation("32342233333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333423423429834023490239420349203942033489589345893498539845893458939485398453948598345034503450834533213142234", "10230492034203942903423942394823952090234", OP::MUL);
    op.execute();
    std::cout<<op.get()<<std::endl;
}