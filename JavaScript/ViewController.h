//
//  ViewController.h
//  JavaScript
//
//  Created by tianbai on 16/6/8.
//  Copyright © 2016年 厦门乙科网络公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol JSObjcDelegate <JSExport>
- (void)call;
- (void)getCall:(NSString *)callString;

@end
@interface ViewController : UIViewController<UIWebViewDelegate,JSObjcDelegate>
@property (nonatomic, strong) JSContext *jsContext;
@property (strong, nonatomic)  UIWebView *webView;

@end

