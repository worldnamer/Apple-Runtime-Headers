//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSPasteboardWriting-Protocol.h>

@class NSArray, NSString, NSURL;

@interface CNUIVCardSharingItem : NSObject <NSPasteboardWriting>
{
    NSArray *_contacts;
    NSURL *_url;
}

+ (id)createEmptyTemporaryFileForContacts:(id)arg1;
+ (id)itemWithContacts:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)serializeVCard;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithContacts:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

