/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSEditingPane.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class MFMailComposeViewController, NSLock, NSString, NSTimer, PSRootController, UITextView;

@interface LoggingPane : PSEditingPane <MFMailComposeViewControllerDelegate>
{
    UITextView *_textView;
    BOOL _threadRunning;
    BOOL _timeout;
    BOOL _fileError;
    BOOL _dontScroll;
    NSLock *_lock;
    NSTimer *_timer;
    NSString *_output;
    PSRootController *_rootController;
    MFMailComposeViewController *_mailComposeController;
    int _sendingEmailCount;
}

+ (id)systemVersionDescription;
- (BOOL)handlesDoneButton;
- (void)dealloc;
- (void)stopTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)startTimer;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)saveLogFile;

@end

