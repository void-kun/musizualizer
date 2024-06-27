#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <GLFW/glfw3.h>

#include <memory>
#include <string>

#include "res.h"

namespace app {

class MainApp {
   private:
    GLFWwindow* window;

   public:
    MainApp(){};

    // create the main window
    RETURN_STATUS create_window(int32_t width, int32_t height, std::string const& title);

    // destroy the main window
    // RETURN_STATUS destroy_window();

    void draw_window();
};

}  // namespace app

#endif