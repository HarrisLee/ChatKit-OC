//
//  LCCKChatImageMessageCell.h
//  LCCKChatExample
//
//  Created by ElonChan ( https://github.com/leancloud/ChatKit-OC ) on 15/11/16.
//  Copyright © 2015年 https://LeanCloud.cn . All rights reserved.
//

#import "LCCKChatMessageCell.h"

@interface LCCKChatImageMessageCell : LCCKChatMessageCell

/**
 *  用来显示image的UIImageView
 */
@property (nonatomic, strong, readonly) UIImageView *messageImageView;

- (void)setUploadProgress:(CGFloat)uploadProgress;

@end
