@interface CDVInAppBrowserOptions : NSObject {}

@property (nonatomic, assign) BOOL usewkwebview;
@property (nonatomic, assign) BOOL location;
@property (nonatomic, assign) BOOL toolbar;
@property (nonatomic, copy) NSString* closebuttoncaption;
@property (nonatomic, copy) NSString* closebuttoncolor;
@property (nonatomic, copy) NSString* toolbarposition;
@property (nonatomic, copy) NSString* toolbarcolor;
@property (nonatomic, assign) BOOL toolbartranslucent;
@property (nonatomic, assign) BOOL hidenavigationbuttons;
@property (nonatomic, copy) NSString* navigationbuttoncolor;
@property (nonatomic, assign) BOOL cleardata;
@property (nonatomic, assign) BOOL clearcache;
@property (nonatomic, assign) BOOL clearsessioncache;
@property (nonatomic, assign) BOOL hidespinner;

@property (nonatomic, copy) NSString* presentationstyle;
@property (nonatomic, copy) NSString* transitionstyle;

@property (nonatomic, assign) BOOL enableviewportscale;
@property (nonatomic, assign) BOOL mediaplaybackrequiresuseraction;
@property (nonatomic, assign) BOOL allowinlinemediaplayback;
@property (nonatomic, assign) BOOL keyboarddisplayrequiresuseraction;
@property (nonatomic, assign) BOOL suppressesincrementalrendering;
@property (nonatomic, assign) BOOL hidden;
@property (nonatomic, assign) BOOL disallowoverscroll;
@property (nonatomic, copy) NSString* beforeload;

+ (CDVInAppBrowserOptions*)parseOptions:(NSString*)options;

@end
