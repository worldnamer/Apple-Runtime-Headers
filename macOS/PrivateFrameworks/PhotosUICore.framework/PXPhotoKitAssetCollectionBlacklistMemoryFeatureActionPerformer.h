//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
    NSString *_userResponse;
}

+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userResponse; // @synthesize userResponse=_userResponse;
- (void)applyBlacklistFeatureWithActionType:(id)arg1;
- (void)performBackgroundTask;
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;

@end

