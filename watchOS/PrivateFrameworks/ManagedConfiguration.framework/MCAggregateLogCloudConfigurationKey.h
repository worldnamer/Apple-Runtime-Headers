//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCloudConfigurationKey : MCAggregateLogKey
{
    unsigned int _type;
}

+ (id)_type:(unsigned int)arg1;
+ (id)MDMEnrolled;
+ (id)DEPEnrolled;
+ (id)supervised;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (unsigned int)value;
- (id)name;

@end

