//
//  main.cpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "GLInit.hpp"

int width = 800;
int height = 600;

int main(int argc, const char * argv[]) {
    
    GLInit* glInit = new GLInit();
    
    glInit->GlFWInit();
    glInit->GLFWCreateWindow(width, height, "Learn OpenGL");
    glInit->GLEWInit();
    SurfaceCallBack* surface = new SurfaceCallBack();
    glInit->setSurfaceCallBack(surface);
    glInit->GLStart();
    
    delete surface;
    delete glInit;
    return 0;
}
