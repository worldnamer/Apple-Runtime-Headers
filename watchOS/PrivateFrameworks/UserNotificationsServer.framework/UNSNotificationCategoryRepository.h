//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_categoriesForBundleIdentifier:(id)arg1;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (void)performMigration;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)categoriesForBundleIdentifier:(id)arg1;
- (id)allBundleIdentifiers;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (int)_maxObjectsPerKey;

@end

