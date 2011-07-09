/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/TransientBookmarkItem.h>

@class NSNumber;

@interface TransientBookmark : TransientBookmarkItem
{
}

+ (BOOL)automaticallyNotifiesObserversForKey222:(id)arg1;
+ (void)setEntity:(id)arg1;
+ (id)entity;
- (id)URL;
- (void)setURL:(id)arg1;
- (BOOL)isFeed;
- (void)setIsFeed:(BOOL)arg1;
- (void)setDisplaysUnderInbox:(BOOL)arg1;
- (BOOL)isSubscribed;
- (void)setIsSubscribed:(BOOL)arg1;
- (BOOL)existsInMailOnly;
- (void)setExistsInMailOnly:(BOOL)arg1;
- (void)_propagateChangeToBookmarksWithSameURLForKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(retain) NSNumber *shouldSubscribe; // @dynamic shouldSubscribe;

@end

