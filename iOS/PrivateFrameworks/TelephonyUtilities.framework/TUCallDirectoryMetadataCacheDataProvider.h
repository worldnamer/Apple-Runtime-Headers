//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    int _identificationEntriesChangedNotifyToken;
    CXCallDirectoryManager *_callDirectoryManager;
    CDUnknownBlockType _countryDialingCode;
    CDUnknownBlockType _firstIdentificationEntriesForEnabledExtensions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType firstIdentificationEntriesForEnabledExtensions; // @synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions;
@property(copy, nonatomic) CDUnknownBlockType countryDialingCode; // @synthesize countryDialingCode=_countryDialingCode;
@property(readonly, nonatomic) int identificationEntriesChangedNotifyToken; // @synthesize identificationEntriesChangedNotifyToken=_identificationEntriesChangedNotifyToken;
@property(readonly, nonatomic) CXCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)dealloc;
- (id)init;

@end

