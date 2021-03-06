//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider
{
    NSDate *_date;
    long long _style;
    unsigned long long _units;
}

+ (id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long units; // @synthesize units=_units;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringRepresentation;
- (id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

@end

