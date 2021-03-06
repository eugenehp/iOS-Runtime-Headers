/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject {
    TSDLineEnd *mHeadLineEnd;
    TSDStroke *mStroke;
    TSDLineEnd *mTailLineEnd;
}

@property(readonly) TSDLineEnd * headLineEnd;
@property(readonly) TSDStroke * stroke;
@property(readonly) TSDLineEnd * tailLineEnd;

+ (id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;

- (void)dealloc;
- (id)headLineEnd;
- (id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)stroke;
- (id)tailLineEnd;

@end
