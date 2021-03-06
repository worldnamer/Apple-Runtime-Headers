//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject>
{
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)unscheduleEventWithName:(id)arg1;
- (void)scheduleEvent:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_handleEvent:(id)arg1;
- (void)unittest_fireEvent:(id)arg1;
- (void)_queue_unscheduleEventWithName:(id)arg1;
- (void)_queue_scheduleEvent:(id)arg1;
- (void)_queue_handleXPCEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

