//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface _CDObservationCenter : NSObject
{
    NSMapTable *_senderToNotificationObservers;
    NSMapTable *_senderToNotificationObserverObservers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)_postObserverChangesNotificationWithObserverCounts:(id)arg1;
- (void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(_Bool)arg4 observerCounts:(id)arg5;
- (void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(_Bool)arg3;
- (void)_removeObserver:(id)arg1 observerObserver:(_Bool)arg2;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(_Bool)arg4;
- (void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(_Bool)arg5 usingCall:(id)arg6;
- (id)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(_Bool)arg3 shouldCreate:(_Bool)arg4;
- (id)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(_Bool)arg2 shouldCreate:(_Bool)arg3;
- (id)init;

@end

