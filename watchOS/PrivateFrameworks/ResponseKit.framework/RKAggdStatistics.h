//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKAggdStatistics : NSObject
{
}

+ (void)clearScalarValuesForLanguage:(id)arg1;
+ (void)decrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)incrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (id)buildAggdKey:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;

@end

