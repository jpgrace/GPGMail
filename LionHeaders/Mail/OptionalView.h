/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@class NSButton;

@interface OptionalView : NSView
{
    NSButton *_optionSwitch;
    NSView *_primaryView;
    struct CGRect _originalFrame;
    BOOL _isResizing;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)_subviewFrameDidChange:(id)arg1;
- (id)primaryView;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)optionSwitch;
- (void)sizeToFit;
- (double)widthIncludingOptionSwitch:(BOOL)arg1;
- (double)widthOffsetIncludingOptionSwitch:(BOOL)arg1;

@end

