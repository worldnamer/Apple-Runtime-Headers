//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformOp-Protocol.h>

@class MDLAnimatedScalar, NSString;

@interface MDLTransformRotateYOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedScalar *_animatedValue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedScalar *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
-     // Error parsing type: {?=[4]}16@0:4d8, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}16@0:4d8, name: float4x4AtTime:
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;

@end

