//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface PRDictionary : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSDictionary *_offsetsDictionary;
    NSDictionary *_numEntriesDictionary;
    NSDictionary *_dictionariesDictionary;
    PRDictionary *_fallbackDictionary;
}

- (id)fallbackDictionary;
- (id)dictionaryAtIndex:(unsigned long long)arg1;
- (_Bool)checkWordBuffer:(char *)arg1 length:(unsigned long long)arg2 encoding:(unsigned int)arg3 index:(unsigned long long)arg4 caseInsensitive:(_Bool)arg5;
- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 fallbackURL:(id)arg2;

@end

