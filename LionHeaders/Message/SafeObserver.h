/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "NSCopying-Protocol.h"

@interface SafeObserver : NSObject <NSCopying>
{
    unsigned long long _retainCount;
    BOOL _inDealloc;
}

+ (void)initialize;
+ (void)lockSafeObservers;
+ (void)unlockSafeObservers;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)retain;
- (id)willDealloc;
- (void)release;
- (unsigned long long)retainCount;

@end

