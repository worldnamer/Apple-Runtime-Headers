//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookDataStore/BDSCloudKitSupportSignOutDissociate-Protocol.h>
#import <BookDataStore/NSObject-Protocol.h>

@class BCMutableCloudSyncVersions, BCMutableStoreItem, NSArray, NSDictionary, NSString;

@protocol BCCloudStoreAssetManager <NSObject, BDSCloudKitSupportSignOutDissociate>
- (void)getStoreItemChangesSince:(BCMutableCloudSyncVersions *)arg1 completion:(void (^)(NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, _Bool))arg2;
- (void)fetchStoreItemsIncludingDeleted:(_Bool)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)storeItemForStoreID:(NSString *)arg1 completion:(void (^)(BCMutableStoreItem *, NSError *))arg2;
- (void)deleteStoreItemsWithStoreIDs:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteStoreItemWithStoreID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addStoreItems:(NSDictionary *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)addStoreItem:(BCMutableStoreItem *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
@end

