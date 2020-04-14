//
//  CQColor.m
//  CQColor
//
//  Created by 刘超群 on 2020/3/23.
//  Copyright © 2020 chaoqun. All rights reserved.
//

#import "CQColor.h"

@implementation CQColor
+ (UIColor *)fitWhiteColor{
    return [CQColor fitColorWithLightColor:[UIColor whiteColor] darkColor:[UIColor blackColor]];
}

+ (UIColor *)fitBlackColor{
    return [CQColor fitColorWithLightColor:[UIColor blackColor] darkColor:[UIColor whiteColor]];
}

+ (UIColor *)fitGrayColor{
    return [CQColor fitColorWithLightColor:[UIColor grayColor] darkColor:[UIColor darkGrayColor]];
}

+ (UIColor *)fitColorWithLightColor:(UIColor *)lightClor darkColor:(UIColor *)darkColor{
    if (@available(iOS 13.0, *)) {
    UIColor *color = [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull trainCollection) {
        if ([trainCollection userInterfaceStyle] == UIUserInterfaceStyleLight) {
            return lightClor;
        }
        else {
            return darkColor;
        }
    }];
        return color;
    }else{
        return lightClor;
    }
}

@end
