//
//  PicturebookShop.h
//  PicturebookShop
//
//  Created by Luka Miljak on 5/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

#import "Author.h"
#import "Book.h"
#import "Category.h"
#import "Image.h"
#import "Book+Addon.h"
#import "Category+Addon.h"
#import "Author+Addon.h"
#import "CategoryToBookMap.h"
#import "BookExtractor.h"

#define PICTUREBOOK_SHOP_DEBUG_LOGS 1

#ifdef PICTUREBOOK_SHOP_DEBUG_LOGS

#define PBDLOG(msg) NSLog(msg);
#define PBDLOG_ARG(msg, arg) NSLog(msg, arg);

#else

#define PBDLOG(msg) 
#define PBDLOG_ARG(msg, arg)

#endif

@interface PicturebookShop : NSObject <NSXMLParserDelegate, BookExtractorDelegate>

@property (nonatomic, strong) NSURL *urlBase;
@property (readwrite) BOOL isShopLoaded;
@property (readwrite) NSUInteger numberOfBooksWhinchNeedCoversDownloaded;

@property (nonatomic, strong) UIManagedDocument *libraryDatabase;

- (PicturebookShop *)initShop;
- (void)refreshShop;    
- (void)refreshDatabase; 
- (void)userSelectsCategoryAtIndex:(NSUInteger)index;
- (void)userSelectsBook:(Book *)book;
- (Book *)getSelectedBook;
- (NSOrderedSet *)getBooksForSelectedCategory;
- (NSOrderedSet *)getCategoriesInShop;
- (void)coversLoaded;
- (void)loadShopFromDatabase;


@end
