//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MPMediaItemCollection, NSString, PUAirplayRoute;

@interface PUSlideshowSettings : NSObject <NSCopying>
{
    PUAirplayRoute *_airplayRoute;
    NSString *_transition;
    MPMediaItemCollection *_musicCollection;
}

+ (id)settingsForAirplayRoute:(id)arg1;
@property(retain, nonatomic) MPMediaItemCollection *musicCollection; // @synthesize musicCollection=_musicCollection;
@property(copy, nonatomic) NSString *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) PUAirplayRoute *airplayRoute; // @synthesize airplayRoute=_airplayRoute;
- (void).cxx_destruct;
- (id)description;
- (id)copyOfMusicCollection;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) BOOL isOrigamiTransition;
- (void)saveToPreferences;
- (id)initWithDictionary:(id)arg1 airplayRoute:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

