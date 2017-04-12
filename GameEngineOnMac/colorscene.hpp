//
//  colorscene.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef colorscene_hpp
#define colorscene_hpp

#include <stdio.h>
// GLEW
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>
#include "SurfaceCallBack.hpp"
#include "shader.h"
#include <SOIL.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "camera.h"

class ColorScene: public SurfaceCallBack{
public:
    ColorScene();
    ~ColorScene();
    virtual void SurfaceInit();
    virtual void SurfaceRender();
    virtual void SurfaceFinish();
private:
    Shader* lightingShader;
    Shader* lampShader;
    GLuint VBO, containerVAO;
    GLuint lightVAO;
    //Camera
    Camera* camera;
};

#endif /* colorscene_hpp */
