#import <UIKit/UIKit.h>
#import "KGOSocialMediaController.h"
#import "Facebook.h"

@class IconGrid;

// still deciding how FB wrapper work should be allocated
// between KGOSocialMediaController and this class.
// since this is a facebook module it would be fine to put as much fb stuff in here as we want
@interface FacebookVideosViewController : UIViewController <FacebookWrapperDelegate,
FBRequestDelegate> {
    
    NSMutableArray *_fbRequestQueue;
    FBRequest *_groupsRequest;
    FBRequest *_videosRequest;

    IconGrid *_iconGrid;
    NSMutableArray *_icons;
    
    NSString *_gid;
}

@end