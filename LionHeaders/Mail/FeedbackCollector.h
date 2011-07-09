/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSMutableString, NSProgressIndicator, NSTextField, NSView, NSWindow, WebView;

@interface FeedbackCollector : NSObject <NSWindowDelegate>
{
    WebView *_metricsWebView;
    NSButton *_includeMetricsCheckbox;
    NSWindow *_window;
    NSProgressIndicator *_spinner;
    NSTextField *_collectingTextField;
    NSView *_statusContainerView;
    NSButton *_continueButton;
    NSMutableString *_feedbackHTMLString;
    BOOL _sendMetricsImmediately;
    BOOL _currentlyLoading;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)run;
- (void)_collectMetrics;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_sendMetricsIfRequested;
- (void)_cleanUpWindow;
- (void)_loadStringIntoWebView;
- (BOOL)windowShouldClose:(id)arg1;
- (void)continue:(id)arg1;
- (void)cancel:(id)arg1;

@end

