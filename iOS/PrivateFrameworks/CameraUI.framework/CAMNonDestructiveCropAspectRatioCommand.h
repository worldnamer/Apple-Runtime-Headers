//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMNonDestructiveCropAspectRatioCommand : CAMCaptureCommand
{
    long long __aspectRatioCrop;
}

@property(readonly, nonatomic) long long _aspectRatioCrop; // @synthesize _aspectRatioCrop=__aspectRatioCrop;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (id)initWithAspectRatioCrop:(long long)arg1;

@end

