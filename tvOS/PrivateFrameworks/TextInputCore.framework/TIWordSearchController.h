//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;
}

+ (id)sharedWordSearchController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;
- (id)wordSearchForInputMode:(id)arg1;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)init;

@end

