#import <WebKit/WebKit.h>

@interface CDVWKInAppBrowserUIDelegate : NSObject <WKUIDelegate>{
    @private
    UIViewController* _viewController;
}

@property (nonatomic, copy) NSString* title;

- (instancetype)initWithTitle:(NSString*)title;
-(void) setViewController:(UIViewController*) viewController;

@end
