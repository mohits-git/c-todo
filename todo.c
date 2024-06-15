#include <stdio.h>
#include <GLFW/glfw3.h>
#include <GL/gl.h>

int main() {
  glfwInit();

  GLFWwindow* window = glfwCreateWindow(640, 360, "Todo", NULL, NULL);

  glfwMakeContextCurrent(window);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
