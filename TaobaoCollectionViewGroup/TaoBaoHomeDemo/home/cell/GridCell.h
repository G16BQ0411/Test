//
//  GridCell.h
//  DemoOC01
//
//  Created by yunchu on 15/10/16.
//  Copyright (c) 2015年 yunchu. All rights reserved.
//

#import <UIKit/UIKit.h>

//实时推荐

@interface GridCell : UICollectionViewCell

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imgPath;

- (void)hiddenTitle:(BOOL)hidden;
@end
