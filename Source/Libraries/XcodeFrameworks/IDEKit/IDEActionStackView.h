/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDECapsuleListView.h>

@interface IDEActionStackView : IDECapsuleListView
{
    id <IDEActionStackViewDelegate> _delegate;
}

@property id <IDEActionStackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 stackView:(id)arg2;
- (void)invalidateLayout;

@end

