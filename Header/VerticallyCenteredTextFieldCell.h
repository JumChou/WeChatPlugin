//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

__attribute__((visibility("hidden")))
@interface VerticallyCenteredTextFieldCell : NSTextFieldCell
{
    BOOL mIsEditingOrSelecting;
}

- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;

@end

