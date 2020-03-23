//
//  Macro.h
//  CQColor
//
//  Created by 刘超群 on 2020/3/23.
//  Copyright © 2020 chaoqun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CQColor.h"

#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

// 适配iOS13黑暗模式
// 自动黑暗模式，输入light颜色，黑暗颜色自动翻转
#define RGBA_AUTO(r,g,b,a) [CQColor fitColorWithLightColor:[UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:a] darkColor:[UIColor colorWithRed:((255-r)/255.0) green:((255 - g)/255.0) blue:((255 - b)/255.0) alpha:a]]
// 自动黑暗模式，输入light颜色，黑暗颜色自动翻转 透明度为1
#define RGB_AUTO(r,g,b) RGBA_AUTO(r,g,b,1.0f)
// 手动黑暗模式，需输入light dark 两个颜色
#define RGBA_MAN(r1,g1,b1,a1,r2,g2,b2,a2) [CQColor fitColorWithLightColor:[UIColor colorWithRed:(r1/255.0) green:(g1/255.0) blue:(b1/255.0) alpha:a1] darkColor:[UIColor colorWithRed:(r2/255.0) green:(g2/255.0) blue:(b2/255.0) alpha:a2]]
// 手动黑暗模式，需输入light dark 两个颜色 透明度为1
#define RGB_MAN(r1,g1,b1,r2,g2,b2) RGBA_MAN(r1,g1,b1,1.0f,r2,g2,b2,1.0f)

@interface Macro : NSObject

@end


