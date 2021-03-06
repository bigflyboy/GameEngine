//
//  TriangleCallback.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef TriangleCallback_hpp
#define TriangleCallback_hpp

#include <stdio.h>
// GLEW
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>
#include "SurfaceCallBack.hpp"
#include "shader.h"

class TriangleCallback:public SurfaceCallBack{
public:
    
    TriangleCallback();
    
    ~TriangleCallback();
    
    virtual void SurfaceInit();
    virtual void SurfaceRender();
    virtual void SurfaceFinish();
private:
    Shader* ourShader;
    GLuint VBO, VAO;
};

#endif /* TriangleCallback_hpp */
