//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXSearchLoggingUtility : NSObject
{
    _Bool _nextTokenSuggestionTappedInCurrentSearchSession;
    _Bool _wordCompletionTappedInCurrentSearchSession;
}

@property(nonatomic) _Bool wordCompletionTappedInCurrentSearchSession; // @synthesize wordCompletionTappedInCurrentSearchSession=_wordCompletionTappedInCurrentSearchSession;
@property(nonatomic) _Bool nextTokenSuggestionTappedInCurrentSearchSession; // @synthesize nextTokenSuggestionTappedInCurrentSearchSession=_nextTokenSuggestionTappedInCurrentSearchSession;
- (void)logCurrentState;
- (void)setWordCompletionTappedInCurrentSearchSession;
- (void)setNextTokenSuggestionTappedInCurrentSearchSession;

@end

