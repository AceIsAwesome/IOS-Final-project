//
//  UIImage+Resize.h
//  SliderTilePuzzle
//
//  Created by Michael Vitone on 4/24/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Resize)

- (UIImage *)resizedImageWithSize:(CGSize)size;
- (UIImage *)cropImageFromFrame:(CGRect)frame;

@end
