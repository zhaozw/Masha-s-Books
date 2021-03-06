//
//  PicturebookShopViewController.h
//  PicturebookShop
//
//  Created by Luka Miljak on 5/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PicturebookShop.h"
#import "PicturebookCategory.h"
#import "PicturebookInfo.h"
#import "PicturebookAuthor.h"
#import "PicturebookCover.h"
#import "CoverTableRowCell.h"


@interface PicturebookShopViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *shopRefreshButton;
@property (weak, nonatomic) IBOutlet UIWebView *shopWebView;
@property (weak, nonatomic) IBOutlet UIImageView *selectedCoverTumbnailView;
@property (weak, nonatomic) IBOutlet UIButton *buyButton;

@end
