//
//  RQViewModel.h
//  reactiveDemo
//
//  Created by 王文文 on 2018/3/23.
//  Copyright © 2018年 wangwen. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 传递唯一ID的key：例如：商品id 用户id...
FOUNDATION_EXTERN NSString *const MHViewModelIDKey;
/// 传递导航栏title的key：例如 导航栏的title...
FOUNDATION_EXTERN NSString *const MHViewModelTitleKey;
/// 传递数据模型的key：例如 商品模型的传递 用户模型的传递...
FOUNDATION_EXTERN NSString *const MHViewModelUtilKey;
/// 传递webView Request的key：例如 webView request...
FOUNDATION_EXTERN NSString *const MHViewModelRequestKey;

@interface RQViewModel : NSObject


@property (nonatomic, readonly, copy) NSDictionary *params;

/// navItem.title
@property (nonatomic, readwrite, copy) NSString *title;
/// 返回按钮的title，default is nil 。
/// 如果设置了该值，那么当Push到一个新的控制器,则导航栏左侧返回按钮的title为backTitle
@property (nonatomic, readwrite, copy) NSString *backTitle;

/// The callback block. 当Push/Present时，通过block反向传值
@property (nonatomic, readwrite, copy) VoidBlock_id callback;

@end
