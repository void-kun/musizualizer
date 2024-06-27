
#include "main_window.h"

RETURN_STATUS app::MainApp::create_window(int32_t width, int32_t height, std::string const &title) {
    if (!glfwInit()) {
        return RETURN_STATUS::ERROR;
    }
    this->window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    if (!this->window) {
        glfwTerminate();
        return RETURN_STATUS::ERROR;
    }

    return RETURN_STATUS::SUCCESS;
}

/// @brief Destroy the main window
/// @return RETURN_STATUS
// RETURN_STATUS app::MainApp::destroy_window() { glfwDestroyWindow(this->window.get()); }

void app::MainApp::draw_window() {
    /* Make the window's context current */
    glfwMakeContextCurrent(this->window);

    while (!glfwWindowShouldClose(this->window)) {
        // render
        glClear(GL_COLOR_BUFFER_BIT);

        // swap front and back buffers
        glfwSwapBuffers(this->window);

        // poll for and process events
        glfwPollEvents();
    }
}