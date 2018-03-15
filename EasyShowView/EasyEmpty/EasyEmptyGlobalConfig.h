//
//  EasyEmptyGlobalConfig.h
//  EasyShowViewDemo
//
//  Created by Mr_Chen on 2018/3/5.
//  Copyright © 2018年 chenliangloveyou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EasyShowUtils.h"

@interface EasyEmptyGlobalConfig : NSObject

@property (nonatomic,strong)UIColor *bgColor ;   //背景颜色

@property (nonatomic,strong)UIFont *tittleFont ; //标题字体大小
@property (nonatomic,strong)UIColor *titleColor ;//标题字体颜色

@property (nonatomic,strong)UIFont *subtitleFont ;  //副标题字体大小
@property (nonatomic,strong)UIColor *subTitleColor ;//副标题字体颜色

@property (nonatomic,strong)UIFont *buttonFont ;    //按钮字体大小
@property (nonatomic,strong)UIColor *buttonColor ;  //按钮字体亚瑟
@property (nonatomic,strong)UIColor *buttonBgColor ;//按钮背景颜色

@property (nonatomic,assign)UIEdgeInsets buttonEdgeInsets ; //按钮往内缩的边距（按钮四边边缘距离文字的距离）


easyShowView_singleton_interface


@end
