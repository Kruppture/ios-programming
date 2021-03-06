//
//  ListViewController.h
//  Nerdfeed
//
//  Created by Nick on 12/31/12.
//  Copyright (c) 2012 Nick. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RSSChannel;
@class WebViewController;
@class SubListViewController;

@interface ListViewController : UITableViewController <NSURLConnectionDataDelegate, NSXMLParserDelegate>
{
    NSURLConnection *connection;
    NSMutableData *xmlData;
    RSSChannel *channel;
}

@property (nonatomic, strong) WebViewController *webViewController;
@property (nonatomic, strong) SubListViewController *subListViewController;

- (void)fetchEntries;

@end


@protocol ListViewControllerDelegate

- (void)listViewController:(UITableViewController *)lvc handleObject:(id)object;

@end
