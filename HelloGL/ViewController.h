//
//  ViewController.h
//  HelloGL
//
//  Created by wanglixin on 16/6/30.
//  Copyright © 2016年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "OpenGLView.h"

@interface ViewController : UIViewController

// Inside @interface
//OpenGLView* _glView;

// After @interface
//@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@property (nonatomic, strong) OpenGLView *glView;

@end

