//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol FCCKZonePruningAssistant <NSObject>
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(NSString *)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(NSString *)arg1;
- (NSArray *)pruneRecords:(NSArray *)arg1 forZoneName:(NSString *)arg2;
- (_Bool)canHelpPruneZoneName:(NSString *)arg1;
@end

