//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage : MFMailMessage
{
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
    DAMailMessage *_DAMailMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;
- (unsigned long long)messageSize;
- (id)remoteMailboxURL;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageBody;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)headers;
- (id)mailbox;
- (id)externalConversationID;
- (id)remoteID;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

@end

