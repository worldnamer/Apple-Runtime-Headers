//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object, _RWIRelayConnectionToApplicationDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayConnectionToApplication : NSObject
{
    id <_RWIRelayConnectionToApplicationDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
    NSString *_tag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <_RWIRelayConnectionToApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL available; // @dynamic available;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)_handleEvent:(id)arg1;
- (id)_deserializeMessage:(id)arg1;
- (void)dealloc;
- (void)close;
- (id)initWithConnection:(id)arg1;

@end

