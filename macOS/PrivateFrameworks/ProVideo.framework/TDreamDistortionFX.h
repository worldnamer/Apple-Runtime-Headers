//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamDistortionFX : TDreamProgramWrapper
{
    int centerUniform;
    int modeUniform;
    float adjustUniform;
    int _mode;
    float _fine;
    struct CGPoint _center;
}

@property(nonatomic) float fine; // @synthesize fine=_fine;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)setUniforms;
- (id)init;

@end

