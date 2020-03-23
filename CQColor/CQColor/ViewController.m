//
//  ViewController.m
//  CQColor
//
//  Created by 刘超群 on 2020/3/23.
//  Copyright © 2020 chaoqun. All rights reserved.
//

#import "ViewController.h"
#import "Macro.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    for (int i = 0; i < 4; i ++) {
        UIView *view = [[UIView alloc] initWithFrame:CGRectMake(30, 80+i*20, 60, 15)];
        [self.view addSubview:view];
        switch (i) {
            case 0:
                view.backgroundColor = CQColor.fitGrayColor;
                break;
            case 1:
                view.backgroundColor = [CQColor fitColorWithLightColor:UIColor.redColor darkColor:UIColor.blueColor];
                break;
            case 2:
                view.backgroundColor = RGB_AUTO(35, 50, 50);
                break;
            case 3:
                view.backgroundColor = RGB_MAN(25, 50, 50, 50, 20, 100);
                break;
            default:
                break;
        }
    }
    
}


@end
