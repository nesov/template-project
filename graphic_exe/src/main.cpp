#include <iostream>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>

int main() {
    Fl_Window win(800, 600, "Hello World");
    win.show();
    return Fl::run();
}