//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>
#import <TSUtility/NSFastEnumeration-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_uuids;
}

+ (id)tokenizeUUIDPathString:(id)arg1;
+ (id)lastUUIDFromUUIDPathString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDPathString;
@property(readonly, nonatomic) NSUUID *lastUUID;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

