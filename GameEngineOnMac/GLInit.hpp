//
//  GLInit.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef GLInit_hpp
#define GLInit_hpp

// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>

#include <stdio.h>
#include <iostream>
#include <string>
#include "SurfaceCallBack.hpp"

using namespace std;

class GLInit{
public:
    GLInit();
    ~GLInit();
    void GlFWInit();
    void GLFWCreateWindow(int width, int height, string name);
    void GLEWInit();
    void GLStart();
    void setSurfaceCallBack(SurfaceCallBack* callback);
    GLFWwindow* getWindow();
private:
    int m_width, m_height;
    string m_name;
    SurfaceCallBack* m_callback;
    GLFWwindow* window;
};

#endif /* GLInit_hpp */
