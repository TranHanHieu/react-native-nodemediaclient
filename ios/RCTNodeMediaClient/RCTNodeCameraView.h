//
//  RCTNodeCameraView.h
//  
//
//  Created by Mingliang Chen on 2017/12/12.
//  Copyright © 2017年 NodeMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCTNodeCameraView : UIView
@property (strong, nonatomic) NSString *outputUrl;
@property (nonatomic) BOOL autopreview;
@property (strong,nonatomic) NSDictionary *camera;
@property (strong,nonatomic) NSDictionary *audio;
@property (strong,nonatomic) NSDictionary *video;
@property (nonatomic) BOOL denoise;
@property (nonatomic) BOOL microphone;
@property (nonatomic) NSInteger smoothSkinLevel;

@property (nonatomic) BOOL flashEnable;

-(int)startprev;
-(int)stopprev;
-(int)start;
-(int)stop;
-(int)switchCamera;

@end
