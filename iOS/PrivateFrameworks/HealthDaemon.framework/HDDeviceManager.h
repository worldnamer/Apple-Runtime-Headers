//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile, NSNumber;

@interface HDDeviceManager : NSObject
{
    HDProfile *_profile;
    HDDatabaseValueCache *_devicesByPersistentID;
    HDDatabaseValueCache *_deviceEntitiesByDevice;
    NSNumber *_noneDeviceID;
}

- (void).cxx_destruct;
@property(copy) NSNumber *noneDeviceID; // @synthesize noneDeviceID=_noneDeviceID;
@property(retain, nonatomic) HDDatabaseValueCache *deviceEntitiesByDevice; // @synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice;
@property(retain, nonatomic) HDDatabaseValueCache *devicesByPersistentID; // @synthesize devicesByPersistentID=_devicesByPersistentID;
- (id)allDeviceEntitiesWithError:(id *)arg1;
- (id)_noneDevice;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceEntityForDevice:(id)arg1 error:(id *)arg2;
- (id)deviceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)currentDeviceEntityWithError:(id *)arg1;
- (id)deviceEntityForNoDeviceWithError:(id *)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

