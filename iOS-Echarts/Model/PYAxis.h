//
//  PYAxis.h
//  iOS-Echarts
//
//  Created by Pluto Y on 15/9/7.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PYAxisLine.h"
#import "PYAxisLabel.h"
#import "PYSplitLine.h"

typedef enum {
    PYAxisTypeCategory,
    PYAxisTypeValue,
    PYAxisTypeTime,
    PYAxisTypeLog
} PYAxisType;

@interface PYAxis : NSObject

@property (retain, nonatomic, readonly, getter=getType) NSString * type;
@property (assign, nonatomic) BOOL show;
@property (retain, nonatomic) id boundaryGap;
@property (retain, nonatomic) PYAxisLine *axisLine;
@property (retain, nonatomic) PYAxisLabel *axisLabel;
@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) PYSplitLine *splitLine;
@property (retain, nonatomic) NSArray *data;

-(void)reloadData;

/**
 *  设置坐标轴类型
 *
 *  @param pyAxisType 坐标轴类型
 */
-(void)setAxisType:(PYAxisType) pyAxisType;

@end
