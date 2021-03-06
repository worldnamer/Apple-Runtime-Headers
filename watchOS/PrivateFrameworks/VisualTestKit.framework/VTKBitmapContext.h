//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VTKBitmapContext : NSObject
{
    struct CGColorSpace *_colorSpace;
    unsigned int _contextType;
    struct CGContext *_CGContext;
    void *_CGContextDataBytes;
    unsigned int _CGContextDataBytesLength;
    float _width;
    float _height;
    float _scale;
    unsigned int _bytesPerPixel;
    unsigned int _bytesPerRow;
}

+ (id)contextType:(unsigned int)arg1 width:(float)arg2 height:(float)arg3 scale:(float)arg4;
@property(readonly) unsigned int bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly) unsigned int bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(readonly) float scale; // @synthesize scale=_scale;
@property(readonly) float height; // @synthesize height=_height;
@property(readonly) float width; // @synthesize width=_width;
@property(readonly) unsigned int CGContextDataBytesLength; // @synthesize CGContextDataBytesLength=_CGContextDataBytesLength;
@property(readonly) void *CGContextDataBytes; // @synthesize CGContextDataBytes=_CGContextDataBytes;
@property(readonly) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
- (void *)dataAtPixel:(struct VTKPoint)arg1;
-     // Error parsing type: v16@0:4@8^ 12, name: _draw16BitColor:at:
- (void)_draw8BitColor:(id)arg1 at:(char *)arg2;
- (void)drawColor:(id)arg1 at:(void *)arg2;
- (id)colorForAntiAliased;
- (id)colorForSame;
- (id)colorForDifferent;
-     // Error parsing type: @12@0:4^ 8, name: _16BitColor:
- (id)_8BitColor:(char *)arg1;
- (id)colorAt:(void *)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly) unsigned int pixelHeight;
@property(readonly) unsigned int pixelWidth;
- (void)dealloc;
- (id)initWithColorSpaceName:(struct __CFString *)arg1 contextType:(unsigned int)arg2 width:(float)arg3 height:(float)arg4 scale:(float)arg5 bitsPerComponent:(unsigned int)arg6 bytesPerPixel:(unsigned int)arg7 bitmapInfo:(unsigned int)arg8;

@end

