//
//  NationRegionViewController.h
//  TUIKitDemo
//
//  Created by harvy on 2021/12/2.
//  Copyright © 2021 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TelephoneAreaCode;
typedef void(^TelephoneAreaCodeSelectCallback)(TelephoneAreaCode *);

@interface TelephoneAreaCodeSelectorController : UIViewController

@property (nonatomic, copy) TelephoneAreaCodeSelectCallback onSelect;

@end

NS_ASSUME_NONNULL_END
