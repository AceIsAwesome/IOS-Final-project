//
//  SliderTileBoard.h
//  SliderTilePuzzle
//
//  Created by Michael Vitone on 4/24/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SliderTileBoard : NSObject

@property (nonatomic) NSInteger size;

- (instancetype)initWithSize:(NSInteger)size;
- (void)setTileAtCoordinate:(CGPoint)coor with:(NSNumber *)number;
- (NSNumber *)tileAtCoordinate:(CGPoint)coor;

- (BOOL)canMoveTile:(CGPoint)coor;
- (CGPoint)shouldMove:(BOOL)move tileAtCoordinate:(CGPoint)coor;
- (BOOL)isAllTilesCorrect;

- (void)shuffle:(NSInteger)times;

@end
