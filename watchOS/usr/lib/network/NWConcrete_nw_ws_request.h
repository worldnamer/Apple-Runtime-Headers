//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_ws_request-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_ws_request : NSObject <OS_nw_ws_request>
{
    NSObject<OS_xpc_object> *subprotocols;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

