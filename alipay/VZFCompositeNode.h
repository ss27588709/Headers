//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFNode.h"

@interface VZFCompositeNode : VZFNode
{
    VZFNode *_node;
}

+ (id)newWithNode:(id)arg1;
+ (id)newWithView:(const struct ViewClass *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2;
@property(readonly, nonatomic) VZFNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (struct NodeLayout)nodeDidLayout;
- (struct NodeLayout)computeLayoutThatFits:(struct CGSize)arg1;
- (id)flexNode;

@end
