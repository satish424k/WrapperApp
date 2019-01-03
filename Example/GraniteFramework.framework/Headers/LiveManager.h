//
//  LiveManager.m
//  LiveManager
//
//  Created by Braynt on 2016/11/14.
//  Copyright © 2016年 HikaruBB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>



@protocol LiveManagerDelegate <NSObject>

@optional

- (void)onLiveJobCallback:(char *)strDUID nJob:(int)nJob bpData:(char *)bpData nDataSize:(int)nDataSize nReturn:(int)nReturn;

@end

typedef enum
{
    TUNNEL_RULE_AUTO,
    TUNNEL_RULE_P2P_ONLY,
    TUNNEL_RULE_RELAY_ONLY,
} LifeLibrary_ConnectType;
typedef enum
{
    AUDIO_OUT_FORAMT_AAC_16000_1        = 0,
    AUDIO_OUT_FORAMT_AAC_48000_1,
    AUDIO_OUT_FORAMT_PCM_16000_1
    
}AUDIO_OUT_FORAMT;

//=================================================
// Jobs
//=================================================
#define	HON_JOB_NONE					0
#define	HON_JOB_CONNECT				    1
#define	HON_JOB_DISCONNECT				2
#define	HON_JOB_RELEASE				    3
// IP Camera
#define	HON_JOB_GET_SNAPSHOT  			100
#define	HON_JOB_START_RTSP  			101
#define	HON_JOB_STOP_RTSP				102
#define	HON_JOB_START_MJPEG  			103
#define	HON_JOB_STOP_MJPEG				104
#define	HON_JOB_START_SEND_AUDIO		150
#define	HON_JOB_STOP_SEND_AUDIO		    152


//=================================================
// TUNNEL
//=================================================
#define HON_TUNNEL_STATE_CLOSED         0
#define HON_TUNNEL_STATE_OPENING        1
#define HON_TUNNEL_STATE_OPENED         2
#define HON_TUNNEL_STATE_CLOSING        3

//=================================================
// Return Code
//=================================================
#define HON_ERR_SUCCESS				    0
#define HON_ERR_INVLIDE_JOB			    -2
#define HON_ERR_SIZE                    -3
#define HON_ERR_PARSER                  -5
#define HON_ERR_FORMAT                  -6
#define HON_ERR_DEVICE_NOT_FOUND		-10
#define HON_ERR_CLOUD_NOT_FOUND		    -11
#define HON_ERR_CLOUD_NO_RESPONSE		-12
#define HON_ERR_DEVICE_FW_UPGRADING     -15
#define HON_ERR_TUNNEL_CLOSED			-20
#define HON_ERR_TUNNEL_OPENED			-21
#define HON_ERR_TUNNEL_OPENING			-22
#define HON_ERR_TUNNEL_CLOSING			-23
#define HON_ERR_CONNECTION_FAILED		-24
#define HON_ERR_RELAY_CLOSED			-26
#define HON_ERR_CMD_NOT_SUPPORT		    -31
#define HON_ERR_TOO_MANY				-32
#define HON_ERR_JOB_RUNNING			    -34
#define HON_ERR_PRIVACY			        -35




@interface LiveManager : NSObject


@property (weak, nonatomic) UIImage *image;

@property (nonatomic, assign) id<LiveManagerDelegate> delegate;
+ (id)getInstance;
- (void)releaseInstance;
- (NSString *)getVersion;
- (void)connect:(NSDictionary *)strJSON;
- (void)disconnect:(NSDictionary *)strJSON;
- (void)getSnapshot:(NSDictionary *)strJSON;
- (void)mute:(BOOL)YN;
- (void)startLiveStreaming:(NSDictionary *)strJSON;
- (void)stopLiveStreaming:(NSDictionary *)strJSON;
- (void)startTalk:(NSDictionary *)strJSON;
- (void)stopTalk:(NSDictionary *)strJSON;
- (int)getTunnelState:(NSDictionary *)strJSON;
- (void)startMJPEGStreaming:(NSDictionary *)strJSON;
- (void)stopMJPEGStreaming:(NSDictionary *)strJSON;


@end
