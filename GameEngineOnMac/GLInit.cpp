//
//  GLInit.cpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "GLInit.hpp"

GLInit::GLInit(){
    
}

GLInit::~GLInit(){
    
}

void GLInit::GlFWInit(){
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
}

void GLInit::GLFWCreateWindow(int width, int height, string name){
    window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    if (window == nullptr)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
}

void GLInit::GLEWInit(){
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK)
    {
        std::cout << "Failed to initialize GLEW" << std::endl;
    }
}

void GLInit::GLStart(){
    m_callback->SurfaceInit();
    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        m_callback->SurfaceRender();
        glfwSwapBuffers(window);
    }
    m_callback->SurfaceFinish();
    glfwTerminate();
}

void GLInit::setSurfaceCallBack(SurfaceCallBack* callback){
    m_callback = callback;
}
