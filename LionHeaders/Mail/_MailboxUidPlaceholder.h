/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "MFUIMailbox-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface _MailboxUidPlaceholder : NSObject <MFUIMailbox, NSCopying>
{
    NSString *_persistentIdentifier;
    NSString *_displayName;
    NSString *_accountURLString;
    int _type;
    BOOL _isContainer;
}

- (id)initWithPersistentIdentifier:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)account;
- (BOOL)isSmartMailbox;
- (BOOL)isStore;
- (BOOL)hasChildren;
- (long long)numberOfChildren;
- (id)children;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isPlaceholder;
- (void)dealloc;
- (id)description;
- (unsigned long long)displayCount;
- (id)extendedDisplayName;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;

@end

