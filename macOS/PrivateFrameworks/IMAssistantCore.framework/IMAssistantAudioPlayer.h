//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAssistantCore/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, NSString;
@protocol IMAssistantAudioPlayerDelegate;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    id <IMAssistantAudioPlayerDelegate> _delegate;
    NSString *_identifier;
    AVAudioPlayer *_player;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)cleanupAudioSession;
- (BOOL)setupAudioSession;
- (long long)playerState;
- (void)stopPlaying;
- (BOOL)startPlayingAudioURL:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

