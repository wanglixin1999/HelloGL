//
//  OpenGLView.h
//  HelloGL
//
//  Created by wanglixin on 16/6/30.
//  Copyright © 2016年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

// Add to top of file
#import "CC3GLMatrix.h"

@interface OpenGLView : UIView
{
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    
    GLuint _positionSlot;
    GLuint _colorSlot;
    
    GLuint _projectionUniform;
    
    GLuint _modelViewUniform;
    
    float _currentRotation;
    
    GLuint _depthRenderBuffer;
}

@end
