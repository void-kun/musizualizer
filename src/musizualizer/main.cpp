
#include <iostream>
#include <memory>

#include "main_window.h"
#include "res.h"

namespace {

auto run() {
    app::MainApp app = app::MainApp();

    // create window
    RETURN_STATUS res_status = app.create_window(640, 480, "My App");
    check_status(res_status, "Cannot create window");

    app.draw_window();
    glfwTerminate();
}
}  // namespace

int main() {
    run();
    return 0;
}
