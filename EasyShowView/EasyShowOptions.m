//
//  EasyShowOptions.m
//  EasyShowViewDemo
//
//  Created by Mr_Chen on 2017/11/24.
//  Copyright © 2017年 chenliangloveyou. All rights reserved.
//

#import "EasyShowOptions.h"



@interface EasyShowOptions()
@end

@implementation EasyShowOptions

singleton_implementation(EasyShowOptions)

- (instancetype)init
{
    if (self = [super init]) {
        _textFount = [UIFont systemFontOfSize:17];
        _textColor = [UIColor blackColor];
        _backGroundColor = [UIColor whiteColor];
        
        _showShadow = YES ;
        _shadowColor = [UIColor blueColor];
        
        _maxWidthScale = 0.8 ;
        _superViewReceiveEvent = NO ;
        _textStatusType = ShowStatusTextTypeBottom  ;
        _showStartAnimation = YES ;
        _showEndAnimation = NO ;
        _showAnimationDuration = 0.4 ;
    }
    return self ;
}


@end