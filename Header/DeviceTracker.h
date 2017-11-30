//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IOBluetoothDeviceAsyncCallbacks.h"

@class IOBluetoothDevice, NSThread;

__attribute__((visibility("hidden")))
@interface DeviceTracker : NSObject <IOBluetoothDeviceAsyncCallbacks>
{
    BOOL _isMonitoring;
    BOOL _isBlueToothWorking;
    BOOL _deviceInRange;
    BOOL _currentRSSI;
    IOBluetoothDevice *_deviceToMonitor;
    long long _inRangeThreshold;
    CDUnknownBlockType _deviceRangeStatusUpdateBlock;
    CDUnknownBlockType _deviceRSSIBroadcastBlock;
    NSThread *_workThread;
    NSThread *_broadcastThread;
    IOBluetoothDevice *_deviceToBroadcast;
}

+ (id)sharedTracker;
@property(nonatomic) BOOL currentRSSI; // @synthesize currentRSSI=_currentRSSI;
@property(retain, nonatomic) IOBluetoothDevice *deviceToBroadcast; // @synthesize deviceToBroadcast=_deviceToBroadcast;
@property(retain, nonatomic) NSThread *broadcastThread; // @synthesize broadcastThread=_broadcastThread;
@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(copy, nonatomic) CDUnknownBlockType deviceRSSIBroadcastBlock; // @synthesize deviceRSSIBroadcastBlock=_deviceRSSIBroadcastBlock;
@property(copy, nonatomic) CDUnknownBlockType deviceRangeStatusUpdateBlock; // @synthesize deviceRangeStatusUpdateBlock=_deviceRangeStatusUpdateBlock;
@property(nonatomic) long long inRangeThreshold; // @synthesize inRangeThreshold=_inRangeThreshold;
@property(nonatomic) BOOL deviceInRange; // @synthesize deviceInRange=_deviceInRange;
@property(retain, nonatomic) IOBluetoothDevice *deviceToMonitor; // @synthesize deviceToMonitor=_deviceToMonitor;
@property BOOL isBlueToothWorking; // @synthesize isBlueToothWorking=_isBlueToothWorking;
@property BOOL isMonitoring; // @synthesize isMonitoring=_isMonitoring;
- (void).cxx_destruct;
- (void)remoteNameRequestComplete:(id)arg1 status:(int)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)updateStatus;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)updateBroadcastStatus;
- (void)stopBroadcastingRSSI;
- (void)startBroadcastingRSSIForDevice:(id)arg1;

@end

