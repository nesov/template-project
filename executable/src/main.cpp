#include <iostream>

#include "mainheader.h"

void c_method(){
    std::cout << "Hello from executable" << std::endl;
}

int main(){
    framework_functiona();
    framework_functionb();

    c_method();
    a_method(); 
    b_method();

    return 0;
}



// #include <FL/Fl.H>
// #include <FL/Fl_Window.H>

// int main() {
//     Fl_Window win(300, 200, "FLTK Test");
//     win.show();
//     return Fl::run();
// }