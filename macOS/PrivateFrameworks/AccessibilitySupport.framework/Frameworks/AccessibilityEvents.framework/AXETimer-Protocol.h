//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityEvents/NSObject-Protocol.h>

@protocol AXETimer <NSObject>
@property(readonly) id userInfo;
@property(readonly) double timeInterval;
@property(readonly, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)fire;
@end

