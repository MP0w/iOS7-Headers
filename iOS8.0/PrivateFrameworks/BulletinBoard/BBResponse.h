//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BBAssertion, NSArray, NSDictionary, NSString;

@interface BBResponse : NSObject <NSSecureCoding>
{
    BBAssertion *_lifeAssertion;
    CDUnknownBlockType _sendBlock;
    NSString *_bulletinID;
    BOOL _sent;
    NSString *_replyText;
    BOOL _activated;
    NSArray *_lifeAssertions;
    int _actionType;
    NSString *_buttonID;
    NSString *_actionID;
    NSString *_originID;
    NSDictionary *_context;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;
@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send;
- (void)dealloc;

@end

