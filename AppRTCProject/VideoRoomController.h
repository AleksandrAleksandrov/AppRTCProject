//
//  VideoRoomController.h
//  AppRTCProject
//
//  Created by Aleksandr on 8/24/18.
//  Copyright © 2018 Aleksandr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <libjingle_peerconnection/RTCEAGLVideoView.h>
#import <AppRTC/ARDAppClient.h>

#ifndef VideoRoomController_h
#define VideoRoomController_h

@interface VideoRoomController : UIViewController <ARDAppClientDelegate, RTCEAGLVideoViewDelegate>
#endif /* VideoRoomController_h */

//Views, Labels, and Buttons
@property (strong, nonatomic) IBOutlet RTCEAGLVideoView *remoteView;
@property (strong, nonatomic) IBOutlet RTCEAGLVideoView *localView;
//@property (strong, nonatomic) IBOutlet UIView *footerView;
//@property (strong, nonatomic) IBOutlet UILabel *urlLabel;
@property (strong, nonatomic) IBOutlet UIView *buttonContainerView;
@property (strong, nonatomic) IBOutlet UIButton *audioButton;
@property (strong, nonatomic) IBOutlet UIButton *videoButton;
@property (strong, nonatomic) IBOutlet UIButton *hangupButton;

//Auto Layout Constraints used for animations
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *remoteViewTopConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *remoteViewRightConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *remoteViewLeftConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *remoteViewBottomConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *localViewWidthConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *localViewHeightConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *localViewRightConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *localViewBottomConstraint;
//@property (strong, nonatomic) IBOutlet NSLayoutConstraint *footerViewBottomConstraint;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *buttonContainerViewLeftConstraint;

@property (strong, nonatomic) NSString *roomUrl;
@property (strong, nonatomic) NSString *roomName;
@property (strong, nonatomic) ARDAppClient *client;
@property (strong, nonatomic) RTCVideoTrack *localVideoTrack;
@property (strong, nonatomic) RTCVideoTrack *remoteVideoTrack;
@property (assign, nonatomic) CGSize localVideoSize;
@property (assign, nonatomic) CGSize remoteVideoSize;
@property (assign, nonatomic) BOOL isZoom; //used for double tap remote view

//togle button parameter
@property (assign, nonatomic) BOOL isAudioMute;
@property (assign, nonatomic) BOOL isVideoMute;

- (IBAction)audioButtonPressed:(id)sender;
- (IBAction)videoButtonPressed:(id)sender;
- (IBAction)hangupButtonPressed:(id)sender;

@end
