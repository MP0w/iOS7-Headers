//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    id _reserved;
    // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__CFData}III^{__C3DMeshElement}CBc^{__C3DMeshSource}[2]}, name: _meshElement
    NSData *_elementData;
    int _primitiveType;
    int _primitiveCount;
    int _bytesPerIndex;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
-     // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__CFData}III^{__C3DMeshElement}CBc^{__C3DMeshSource}[2]}8@0:4, name: meshElement
@property(readonly, nonatomic) int bytesPerIndex;
@property(readonly, nonatomic) int primitiveCount;
@property(readonly, nonatomic) int primitiveType;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 primitiveType:(int)arg2 primitiveCount:(int)arg3 bytesPerIndex:(int)arg4;
- (void)dealloc;
- (id)init;
-     // Error parsing type: @12@0:4^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=I[4C]}^v^{__CFString}^{__CFString}^{__CFDictionary}ii}^{__CFData}III^{__C3DMeshElement}CBc^{__C3DMeshSource}[2]}8, name: initWithMeshElement:

@end

