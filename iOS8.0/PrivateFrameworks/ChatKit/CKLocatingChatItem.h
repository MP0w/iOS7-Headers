//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem
{
}

- (id)message;
@property(readonly, copy, nonatomic) NSString *locationText;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (BOOL)failed;
- (BOOL)isFromMe;
- (Class)balloonViewClass;
- (id)description;

@end
