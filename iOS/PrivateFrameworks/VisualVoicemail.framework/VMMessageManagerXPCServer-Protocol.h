//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@protocol VMMessageManagerXPCServer <NSObject>
- (void)messagesForMailboxType:(long long)arg1 read:(_Bool)arg2 limit:(long long)arg3 offset:(long long)arg4 reply:(void (^)(NSArray *))arg5;
- (void)messagesForMailboxType:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3 reply:(void (^)(NSArray *))arg4;
- (void)messageCountForMailboxType:(long long)arg1 read:(_Bool)arg2 reply:(void (^)(long long))arg3;
- (void)messageCountForMailboxType:(long long)arg1 reply:(void (^)(long long))arg2;
@end

