//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject
{
    NSData *_mdmIdentityPersistentID;
    NSString *_mdmIdentityCommonName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mdmIdentityCommonName; // @synthesize mdmIdentityCommonName=_mdmIdentityCommonName;
@property(retain, nonatomic) NSData *mdmIdentityPersistentID; // @synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

