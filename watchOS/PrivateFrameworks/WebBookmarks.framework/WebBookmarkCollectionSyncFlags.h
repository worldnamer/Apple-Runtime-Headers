//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBookmarkCollectionSyncFlags : NSObject
{
    _Bool _syncAllowed;
    _Bool _postSyncNotificationWhenUnlocking;
    _Bool _unlockSyncRequested;
    int _syncLockFileDescriptor;
    int _syncNotificationType;
    NSMutableSet *_lockSyncHoldRequestorPointers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool unlockSyncRequested; // @synthesize unlockSyncRequested=_unlockSyncRequested;
@property(readonly, nonatomic) NSMutableSet *lockSyncHoldRequestorPointers; // @synthesize lockSyncHoldRequestorPointers=_lockSyncHoldRequestorPointers;
@property(nonatomic) _Bool postSyncNotificationWhenUnlocking; // @synthesize postSyncNotificationWhenUnlocking=_postSyncNotificationWhenUnlocking;
@property(nonatomic) int syncNotificationType; // @synthesize syncNotificationType=_syncNotificationType;
@property(nonatomic) int syncLockFileDescriptor; // @synthesize syncLockFileDescriptor=_syncLockFileDescriptor;
@property(readonly, nonatomic) _Bool syncAllowed; // @synthesize syncAllowed=_syncAllowed;
- (id)initWithSyncAllowed:(_Bool)arg1;

@end

