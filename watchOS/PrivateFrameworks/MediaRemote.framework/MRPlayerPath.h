//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRClient, MROrigin, MRPlayer, NSData, _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface MRPlayerPath : NSObject
{
    _Bool _systemMediaApplication;
    MROrigin *_origin;
    MRClient *_client;
    MRPlayer *_player;
}

+ (id)localPlayerPath;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSystemMediaApplication) _Bool systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property(retain, nonatomic) MRPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) MRClient *client; // @synthesize client=_client;
@property(retain, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, nonatomic, getter=isResolved) _Bool resolved;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *protobuf;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3;

@end

