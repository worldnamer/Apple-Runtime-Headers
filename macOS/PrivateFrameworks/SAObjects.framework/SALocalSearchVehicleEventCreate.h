//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SALocation;

@interface SALocalSearchVehicleEventCreate : SADomainCommand
{
}

+ (id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vehicleEventCreate;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SALocation *location;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

