//
//  SurfaceCallBack.hpp
//  GameEngineOnMac
//
//  Created by 王志远 on 2017/4/12.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef SurfaceCallBack_hpp
#define SurfaceCallBack_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class SurfaceCallBack{
public:
    SurfaceCallBack();
    virtual ~SurfaceCallBack();
    virtual void SurfaceInit();
    virtual void SurfaceRender();
    virtual void SurfaceFinish();
};

#endif /* SurfaceCallBack_hpp */
