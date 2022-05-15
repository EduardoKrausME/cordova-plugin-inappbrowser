#import <Cordova/CDVScreenOrientationDelegate.h>


@interface CDVInAppBrowserNavigationController : UINavigationController

@property (nonatomic, weak) id <CDVScreenOrientationDelegate> orientationDelegate;

@end
