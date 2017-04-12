//
//  TransCallback.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef TransCallback_hpp
#define TransCallback_hpp

#include <stdio.h>
// GLEW
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>
#include "SurfaceCallBack.hpp"
#include "shader.h"
#include <SOIL.h>

class TransCallback: public SurfaceCallBack{
public:
    TransCallback();
    ~TransCallback();
    
    virtual void SurfaceInit();
    virtual void SurfaceRender();
    virtual void SurfaceFinish();
    
};

#endif /* TransCallback_hpp */
