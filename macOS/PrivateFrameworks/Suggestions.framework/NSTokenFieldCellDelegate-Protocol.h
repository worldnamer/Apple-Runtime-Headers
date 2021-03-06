//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Suggestions/NSObject-Protocol.h>

@class NSArray, NSMenu, NSPasteboard, NSString, NSTokenFieldCell;

@protocol NSTokenFieldCellDelegate <NSObject>

@optional
- (unsigned long long)tokenFieldCell:(NSTokenFieldCell *)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenFieldCell:(NSTokenFieldCell *)arg1 hasMenuForRepresentedObject:(id)arg2;
- (NSMenu *)tokenFieldCell:(NSTokenFieldCell *)arg1 menuForRepresentedObject:(id)arg2;
- (NSArray *)tokenFieldCell:(NSTokenFieldCell *)arg1 readFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)tokenFieldCell:(NSTokenFieldCell *)arg1 writeRepresentedObjects:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (id)tokenFieldCell:(NSTokenFieldCell *)arg1 representedObjectForEditingString:(NSString *)arg2;
- (NSString *)tokenFieldCell:(NSTokenFieldCell *)arg1 editingStringForRepresentedObject:(id)arg2;
- (NSString *)tokenFieldCell:(NSTokenFieldCell *)arg1 displayStringForRepresentedObject:(id)arg2;
- (NSArray *)tokenFieldCell:(NSTokenFieldCell *)arg1 shouldAddObjects:(NSArray *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)tokenFieldCell:(NSTokenFieldCell *)arg1 completionsForSubstring:(NSString *)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@end

