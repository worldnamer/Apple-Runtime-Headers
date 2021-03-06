//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConsoleKit/NSTokenFieldDelegate-Protocol.h>

@class CSKToken, CSKTokenField, NSMutableArray, NSString, NSUUID;
@protocol CSKTokenFieldControllerDelegate;

@interface CSKTokenFieldController : NSObject <NSTokenFieldDelegate>
{
    BOOL _isBasicSearchEnabled;
    CSKTokenField *_tokenField;
    id <CSKTokenFieldControllerDelegate> _delegate;
    NSMutableArray *_currentTokens;
    CSKToken *_temporaryToken;
    NSString *_currentTerm;
    NSUUID *_currentSearchID;
}

+ (BOOL)_isTokenEligible:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *currentSearchID; // @synthesize currentSearchID=_currentSearchID;
@property(retain, nonatomic) NSString *currentTerm; // @synthesize currentTerm=_currentTerm;
@property(retain, nonatomic) CSKToken *temporaryToken; // @synthesize temporaryToken=_temporaryToken;
@property(retain, nonatomic) NSMutableArray *currentTokens; // @synthesize currentTokens=_currentTokens;
@property(nonatomic) BOOL isBasicSearchEnabled; // @synthesize isBasicSearchEnabled=_isBasicSearchEnabled;
@property(nonatomic) __weak id <CSKTokenFieldControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CSKTokenField *tokenField; // @synthesize tokenField=_tokenField;
- (id)_mergeFirstTwoStringsFromArrayIfEligible:(id)arg1;
- (id)_createTokenFromTerm:(id)arg1;
- (id)_createTokensFromObjects:(id)arg1;
- (void)_notifyDelegateTokensDidUpdate;
- (void)_notifyDelegateBasicSearchDidUpdate;
- (void)tokenFieldMenuItemDidClick:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (void)addFiltersToCurrentSearchFilters:(id)arg1;
- (void)clearCurrentSearchFilters;
- (id)currentSearchTerm;
- (id)currentSearchFilters;
- (void)addFiltersToSearch:(id)arg1;
- (void)updateSearchWithFilters:(id)arg1;
- (void)updateSearchWithTerm:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

