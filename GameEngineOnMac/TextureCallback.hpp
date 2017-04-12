//
//  TextureCallback.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef TextureCallback_hpp
#define TextureCallback_hpp

#include <stdio.h>
// GLEW
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>
#include "SurfaceCallBack.hpp"
#include "shader.h"
#include <SOIL.h>

class TextureCallback:public SurfaceCallBack{
public:
    TextureCallback();
    ~TextureCallback();
    virtual void SurfaceInit();
    virtual void SurfaceRender();
    virtual void SurfaceFinish();
private:
    Shader* ourShader;
    GLuint VBO, VAO, EBO;
    GLuint texture1;
    GLuint texture2;
};

#endif /* TextureCallback_hpp */
