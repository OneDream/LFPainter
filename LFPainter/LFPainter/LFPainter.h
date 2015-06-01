//
//  LFPainter.h
//  LFPainter
//
//  Created by linxiaobin on 15/6/1.
//  Copyright (c) 2015年 linxiaobin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface LFPainter : NSObject

@end

extern NSString const * const LinePainter;  // 绘制线

// 绘制接口
@protocol LFPainter <NSObject>

- (void)drawInContext:(CGContextRef)ctx withInvalidRect:(CGRect)rect;

@end

// 根据名字创建绘制的对象
id<LFPainter> CreateLFPainter(NSString *painterType);