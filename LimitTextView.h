//
//  LimitTextView.h
//  Textview
//
//  Created by zhangwentong on 2016年09月13日.
//  Copyright © 2016年 zhangwentong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LimitTextView : UIView<UITextViewDelegate>
@property(nonatomic,strong)UITextView *textView;
@property(nonatomic,strong)UILabel *placeHolderLabel;
@property(nonatomic,strong)UILabel *residueLabel;// 输入文本时剩余字数
@property(nonatomic,strong)NSNumber *residueNumber;// 输入文本时限定字数
@end
