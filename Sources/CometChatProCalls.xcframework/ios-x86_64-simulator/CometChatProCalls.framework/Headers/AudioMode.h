#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

#import <WebRTC/WebRTC.h>
// Audio mode
typedef enum {
    kAudioModeDefault,
    kAudioModeAudioCall,
    kAudioModeVideoCall
} JitsiMeetAudioMode;

// Events
static NSString * const kDevicesChanged = @"org.jitsi.meet:features/audio-mode#devices-update";

// Device types (must match JS and Java)
static NSString * const kDeviceTypeHeadphones = @"HEADPHONES";
static NSString * const kDeviceTypeBluetooth  = @"BLUETOOTH";
static NSString * const kDeviceTypeEarpiece   = @"EARPIECE";
static NSString * const kDeviceTypeSpeaker    = @"SPEAKER";
static NSString * const kDeviceTypeUnknown    = @"UNKNOWN";


@interface AudioMode : RCTEventEmitter<RTCAudioSessionDelegate>

@property(nonatomic, strong) dispatch_queue_t workerQueue;

@end
