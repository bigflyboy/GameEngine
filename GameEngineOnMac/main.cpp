//
//  main.cpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>
#include "GLInit.hpp"
#include "TextureCallback.hpp"

// Function prototypes
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

int width = 800;
int height = 600;

int main(int argc, const char * argv[]) {
    
    GLInit* glInit = new GLInit();
    
    glInit->GlFWInit();
    glInit->GLFWCreateWindow(width, height, "Learn OpenGL");
    glfwSetKeyCallback(glInit->getWindow(), key_callback);
    glInit->GLEWInit();
    SurfaceCallBack* surface = new TextureCallback();
    glInit->setSurfaceCallBack(surface);
    glInit->GLStart();
    
    delete surface;
    delete glInit;
    return 0;
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
    if (key == GLFW_KEY_ESCAPE)
        glfwSetWindowShouldClose(window, GL_TRUE);
}
