//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKAlarm, EKCalendarItem, EKEvent;

@protocol CALNRemoteMutator <NSObject>
- (_Bool)deleteEvent:(EKEvent *)arg1 withSpan:(int)arg2;
- (void)setParticipantStatus:(int)arg1 span:(int)arg2 event:(EKEvent *)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(EKAlarm *)arg2 calendarItem:(EKCalendarItem *)arg3;
@end

