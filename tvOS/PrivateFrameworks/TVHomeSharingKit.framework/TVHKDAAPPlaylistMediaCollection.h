//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class NSString, TVHKDMAPPlaylistIdentifier, TVHKMediaEntityIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPPlaylistMediaCollection : TVHKMediaCollection
{
    NSString *_imageIdentifier;
    TVHKMediaEntityType *_type;
    unsigned long long _playlistType;
    TVHKMediaEntityIdentifier *_parentPlaylistIdentifier;
    TVHKDMAPPlaylistIdentifier *_playlistIdentifier;
}

+ (unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1;
+ (CDUnknownBlockType)sortComparator;
- (void).cxx_destruct;
@property(copy, nonatomic) TVHKDMAPPlaylistIdentifier *playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
- (id)type;
- (id)parentPlaylistIdentifier;
- (unsigned long long)playlistType;
- (id)mediaItemCount;
- (id)isOrganizational;
- (id)isAutoGenerated;
- (id)imageIdentifier;
- (id)identifier;
- (id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3;
- (id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;

@end

