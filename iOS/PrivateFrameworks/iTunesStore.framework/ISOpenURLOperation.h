//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation
{
    ISOpenURLRequest *_request;
}

- (void).cxx_destruct;
- (_Bool)_openURL:(id)arg1;
- (id)_newSortedTargetsArray;
- (void)run;
@property(readonly) ISOpenURLRequest *openURLRequest;
- (id)initWithOpenURLRequest:(id)arg1;
- (id)init;

@end

