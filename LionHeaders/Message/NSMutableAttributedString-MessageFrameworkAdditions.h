/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSMutableAttributedString.h"

@interface NSMutableAttributedString (MessageFrameworkAdditions)
- (void)_removeAttachmentsAndReplaceWithCustomAttribute:(BOOL)arg1;
- (void)removeAllAttachments;
- (void)removeAllFormattingExceptAttachments;
- (void)removeQuotingDisplayAttributesInRange:(struct _NSRange)arg1;
- (void)fixQuotingDisplayAttributesInRange:(struct _NSRange)arg1;
- (void)changeQuoteLevelInRange:(struct _NSRange)arg1 by:(long long)arg2 undoManager:(id)arg3;
@end

