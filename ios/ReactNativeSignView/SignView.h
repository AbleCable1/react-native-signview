//
//  SignView.h
//  ReactNativeSignView
//
//  Created by Harish on 20/02/19.
//  Copyright © 2019 Tekion. All rights reserved.
//

#ifndef SignView_h
#define SignView_h


#import "UIKit/UIKit.h"
#import "SignViewCallbacks.h"

@interface SignView : UIView
@property (nonatomic,strong) id <SignViewCallbacks> delegate;

-(void)setSignatureColor: (UIColor*) signColor;
-(void)clearSignature;
- (void) commonInit;
@end

#endif /* SignView_h */
