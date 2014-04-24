//
//  SliderTileBoardView.h
//  SliderTilePuzzle
//
//  Created by Michael Vitone on 4/24/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SliderTileBoardView;

@protocol SliderTileBoardViewDelegate <NSObject>

@optional
- (void)tileBoardViewDidFinished:(SliderTileBoardView *)tileBoardView;
- (void)tileBoardView:(SliderTileBoardView *)tileBoardView tileDidMove:(CGPoint)position;

@end

@interface SliderTileBoardView : UIView

@property (assign, nonatomic) IBOutlet id<SliderTileBoardViewDelegate> delegate;

- (instancetype)initWithImage:(UIImage *)image size:(NSInteger)size frame:(CGRect)frame;
- (void)playWithImage:(UIImage *)image size:(NSInteger)size;
- (void)shuffleTimes:(NSInteger)times;

@end
