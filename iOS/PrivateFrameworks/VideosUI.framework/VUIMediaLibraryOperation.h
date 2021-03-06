//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation
{
    VUIMediaLibrary *_mediaLibrary;
    NSError *_error;
    VUIAsynchronousWorkToken *_asyncWorkToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken; // @synthesize asyncWorkToken=_asyncWorkToken;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)cancel;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end

