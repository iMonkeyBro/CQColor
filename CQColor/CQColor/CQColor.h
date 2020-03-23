//
//  CQColor.h
//  CQColor
//
//  Created by 刘超群 on 2020/3/23.
//  Copyright © 2020 chaoqun. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQColor : UIColor

@property (nonatomic, strong, class) UIColor *fitWhiteColor;  ///< 适配白色
@property (nonatomic, strong, class) UIColor *fitBlackColor;  ///< 适配黑色
@property (nonatomic, strong, class) UIColor *fitGrayColor;  ///< 适配灰色

+ (UIColor *)fitWhiteColor;

+ (UIColor *)fitBlackColor;

+ (UIColor *)fitGrayColor;


/**
 适配黑暗模式
 @param lightClor 白天颜色
 @prarm darkColor 黑暗模式颜色
 */
+ (UIColor *)fitColorWithLightColor:(UIColor *)lightClor darkColor:(UIColor *)darkColor;

@end

NS_ASSUME_NONNULL_END
