//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol _WKWebAuthenticationPanelDelegate;

@interface _WKWebAuthenticationPanel : NSObject
{
    NSString *_relyingPartyID;
    NSArray *_transports;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *transports; // @synthesize transports=_transports;
@property(readonly, copy, nonatomic) NSString *relyingPartyID; // @synthesize relyingPartyID=_relyingPartyID;
- (void)cancel;
@property(nonatomic) __weak id <_WKWebAuthenticationPanelDelegate> delegate;

@end

