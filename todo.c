#include <stdio.h>
#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <leif/leif.h>

int main() {
  glfwInit();

  GLFWwindow* window = glfwCreateWindow(640, 360, "Todo", NULL, NULL);

  glfwMakeContextCurrent(window);

  lf_init_glfw(640, 360, window);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    lf_begin();
    lf_text("Hello World");
    lf_end();

    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
