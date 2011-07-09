/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSScrollView.h"

@interface AutosizingScrollView : NSScrollView
{
    double _maxHeight;
    BOOL _resizingContent;
}

+ (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1 hasHorizontalScroller:(BOOL)arg2 hasVerticalScroller:(BOOL)arg3 borderType:(unsigned long long)arg4;
+ (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1 hasHorizontalScroller:(BOOL)arg2 hasVerticalScroller:(BOOL)arg3 borderType:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)tile;
- (void)docViewFrameChanged;
- (void)setMaxHeight:(double)arg1;
- (double)maxHeight;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end

