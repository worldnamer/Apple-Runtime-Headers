//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class TSWPSmartField, UIDragInteraction, UIDragItem;
@protocol UIDragSession;

@protocol SXTangierDragItemProvider <NSObject>
- (UIDragItem *)dragItemForSmartField:(TSWPSmartField *)arg1 interaction:(UIDragInteraction *)arg2 session:(id <UIDragSession>)arg3;
@end

