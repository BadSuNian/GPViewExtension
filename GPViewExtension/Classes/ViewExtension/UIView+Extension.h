//
//  UIView+Extension.m
//  WOWlife
//
//  Created by apple on 17-2-9.
//  Copyright (c) 2017年 Andrew All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGFloat centerX;

- (void)addTarget:(id)target action:(SEL)action;
@end
